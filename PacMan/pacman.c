#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define CREATE_COLOR(A, B) init_pair(A, B, COLOR_BLACK)
#define PACMAN_VALUE 1
#define MONSTER_VALUE 2
#define FOOD_VALUE 3
#define WALL_VALUE 4

void init();
void run();
void kill();

void init_colors();

int main()
{
  init();
  run();
  kill();

  return 0;
}

void init()
{
  initscr();
  init_colors();
}

void init_colors()
{
  if (has_colors())
  {
    start_color();
    CREATE_COLOR(PACMAN_VALUE, COLOR_YELLOW);
    CREATE_COLOR(MONSTER_VALUE, COLOR_GREEN);
    CREATE_COLOR(FOOD_VALUE, COLOR_CYAN);
    CREATE_COLOR(WALL_VALUE, COLOR_WHITE);
  }
}

void run()
{
  attrset(COLOR_PAIR(PACMAN_VALUE));
  printw("Hello World"); 
  getch();
}

void kill()
{
  endwin();
}
