#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

#define WIDTH 20
#define HEIGHT 10

#define CREATE_COLOR(A, B) init_pair(A, B, COLOR_BLACK)
#define PACMAN_VALUE 1
#define MONSTER_VALUE 2
#define FOOD_VALUE 3
#define WALL_VALUE 4

char *choices[]={"START", "EXIT"};
int startX, startY;					

void menu(WINDOW *menu_win, int highlight);
void startGame();

int main(){
  
  WINDOW *menu_win;
  
  initscr();		// initialize all curses data structures
  clear();		// clear this screen
  noecho();		// users cannot type on this screen
  cbreak(); 		// line buffering disabled, pass on everything
  
  startX = (COLS - WIDTH)/2;			// get a center position(X), COLS:windws colums
  startY = (LINES - HEIGHT)/2;			// get a center position(Y), LINES:windows rows
  
  menu_win = newwin(HEIGHT, WIDTH, startY, startX);	// newwin(height, width, start point, end point)
  keypad(menu_win, TRUE);				// enable the keypad of user's terminal
  wrefresh(menu_win);						// refresh the window
  
  int highlight = 0;

  // create a menu window
  menu(menu_win, highlight);
  wrefresh(menu_win);

  int select;
  while(1){
    wrefresh(menu_win);
    select = wgetch(menu_win);
    switch(select){
      case KEY_UP:
        if(highlight == 0)	// the limited number (if user go up the menu, stay the first menu)
          highlight = 0;
	else
	  --highlight;
	break;
      case KEY_DOWN:
	if(highlight == 1)
	  highlight = 1;
	else
	  ++highlight;
	break;
      case 10:
	if(highlight == 0){
	  startGame();
	}
	else{
          endwin();
	  exit(0);
	}
        break;
    }
    
    menu(menu_win, highlight);
    wrefresh(menu_win);
  }
  return 0;
}

void menu(WINDOW *menu_win, int highlight){
  
  int x=2;
  int y=2;  

  box(menu_win, 0 , 0);  
    
  for(int i=0; i<2; i++){
    if(i == highlight){
      wattron(menu_win, A_REVERSE); 
      mvwprintw(menu_win, y, x, "%s", choices[i]);
      wattroff(menu_win, A_REVERSE);
    }
    else{
      mvwprintw(menu_win, y, x, "%s", choices[i]);
    }
    y++;
  }

  
}

void startGame(){
  
  chtype pacman = 'C';
  chtype food = 248;
  chtype monster = 232;
  chtype wall = 176; 

  // initialization
  WINDOW *win = newwin(0, 0, 0, 0);
  wrefresh(win);
  box(win, 0, 0);
  wrefresh(win);

  // create characters
  if (has_colors())
  {
    start_color();

    CREATE_COLOR(PACMAN_VALUE, COLOR_YELLOW);
    CREATE_COLOR(MONSTER_VALUE, COLOR_GREEN);
    CREATE_COLOR(FOOD_VALUE, COLOR_CYAN);
    CREATE_COLOR(WALL_VALUE, COLOR_WHITE);
  }
 
  
  wattrset(win, COLOR_PAIR(PACMAN_VALUE));
  mvwaddch(win, 2, 2, pacman);
  wgetch(win);
  delwin(win);
  endwin();
  exit(0);
}  
