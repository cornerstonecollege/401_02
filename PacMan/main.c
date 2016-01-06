#include <stdio.h>
#include <ncurses.h>
#include <string.h>

#define WIDTH 30
#define HEIGHT 10 

#define START_GAME "Start Game"
#define CREDITS "Credits"
#define EXIT "Exit"

#define STR_CREDITS "By Luiz Peres"

int startx = 0;
int starty = 0;

char *choices[] = { 
			START_GAME,
			CREDITS,
			EXIT,
		  };

int n_choices = sizeof(choices) / sizeof(char *);
void print_menu(WINDOW *menu_win, int highlight);
int execChoice(WINDOW *menu_win, char* choice);

int main()
{	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
	int c;

	initscr();
	clear();
	noecho();
	cbreak();	/* Line buffering disabled. pass on everything */
	startx = (COLS - WIDTH) / 2;
	starty = (LINES - HEIGHT) / 2;
		
	menu_win = newwin(HEIGHT, WIDTH, starty, startx);
	keypad(menu_win, TRUE);
	refresh();
	print_menu(menu_win, highlight);
	while(1)
	{	
		c = wgetch(menu_win);
		switch(c)
		{	case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else 
					++highlight;
				break;
			case 10:
				choice = highlight;
				if (strcmp(choices[choice - 1], EXIT) != 0)
          			{
 					choice = execChoice(menu_win, choices[choice - 1]);
				}	 
				break;
			default:
				refresh();
				break;
		}

		print_menu(menu_win, highlight);
		if(choice != 0)	/* User did a choice come out of the infinite loop */
			break;
	}
	
	clrtoeol();
	refresh();
	endwin();
	return 0;
}


void print_menu(WINDOW *menu_win, int highlight)
{
	int x, y, i;	

	x = 2;
	y = 2;
	box(menu_win, 0, 0);
	for(i = 0; i < n_choices; ++i)
	{	if(highlight == i + 1) /* High light the present choice */
		{	wattron(menu_win, A_REVERSE); 
			mvwprintw(menu_win, y, x, "%s", choices[i]);
			wattroff(menu_win, A_REVERSE);
		}
		else
			mvwprintw(menu_win, y, x, "%s", choices[i]);
		++y;
	}

	wrefresh(menu_win);
}

int execChoice(WINDOW *menu_win, char* choice)
{
	if (strcmp(choice, CREDITS) == 0)
  	{
    		WINDOW *win = newwin(HEIGHT, WIDTH, starty, startx);
		refresh();
		box(win, 0, 0);
		mvwprintw(win, HEIGHT  / 2, (WIDTH - strlen(STR_CREDITS))  / 2, STR_CREDITS);
		wrefresh(win);
		getch();
		delwin(win);
  	}
	
 	return 0;
}
