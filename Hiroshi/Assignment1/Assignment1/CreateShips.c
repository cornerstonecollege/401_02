#include <time.h>
#include "./BattleShip.h"

extern char map[ROW_SIZE][COLUM_SIZE] = { 0 };			// battle ship map(row:10, colum:10)
extern char userMap[ROW_SIZE][COLUM_SIZE] = { 0 };		// battle ship map for users
int type;												// put ships in horizontal or vertical
int cnt;												// loop counter
int v, h;												// v : vertical, h : horizontal position

// **********************************************
// (createVship)
// OUTLINE		: create a vertical ship
// PARAMETERS	: int size(size of ship)
//				  int number(ship number)
// **********************************************
void createVship(int size, int number) {
	for (cnt = h; cnt < h + size; cnt++) {
		// create a border on the left (water)
		if (v > 0) {
			map[cnt][v - 1] = WATER;
		}
		map[cnt][v] = number;
		// create a border on the right (water)
		if (v < 9) {
			map[cnt][v + 1] = WATER;
		}
	}
	// if not the start position is 0
	// create a border on the left (In this case, boder is 0)
	if (h != 0) {
		map[h - 1][v - 1] = WATER;
		map[h - 1][v] = WATER;
		map[h - 1][v + 1] = WATER;
	}
	// if not the start position is 5 -> the monster ship is located at the right edge
	// create a border on the right (In this case, border is 0)
	if (h != size) {
		map[cnt][v - 1] = WATER;
		map[cnt][v] = WATER;
		map[cnt][v + 1] = WATER;
	}
}

// **********************************************
// (createHship)
// OUTLINE		: create a horizontal ship
// PARAMETERS	: int size(size of ship)
//				  int number(ship number)
// **********************************************
void createHship(int size, int number) {
	for (cnt = v; cnt < v + size; cnt++) {
		// create a border on the left (water)
		if (h > 0) {
			map[h - 1][cnt] = WATER;
		}
		map[h][cnt] = number;
		// create a border on the right (water)
		if (h < 9) {
			map[h + 1][cnt] = WATER;
		}
	}

	// if not the start position is 0
	// create a border on the left (In this case, boder is 0)
	if (v != 0) {
		map[h - 1][v - 1] = WATER;
		map[h][v - 1] = WATER;
		map[h + 1][v - 1] = WATER;
	}
	// if not the start position is 5 -> the monster ship is located at the right edge
	// create a border on the right (In this case, border is 0)
	if (v != 10 - size) {
		map[h - 1][cnt] = WATER;
		map[h][cnt] = WATER;
		map[h + 1][cnt] = WATER;
	}
}

// **********************************************
// (create ships)
// OUTLINE		: create each ships
// **********************************************
void createShips() {

	// initializate for random
	srand((int)time(NULL));

	// ****************
	// monster ship
	// ****************
	type = rand() % 2;
	// vertical
	if (type == 0) {
		v = rand() % 9;
		h = rand() % 5;
		// create a monster ship (vertical)
		// []
		// []
		// []
		// []
		// []
		createVship(5, MONSTER_SIZE);
	}
	// horizontal
	else {
		v = rand() % 5;
		h = rand() % 9;
		// create a monster ship (horizontal)
		// [][][][][]
		createHship(5, MONSTER_SIZE);
	}

	// ****************
	// big ship
	// ****************
	int bCnt;
	for (bCnt = 0; bCnt < 2; bCnt++) {
		while (1) {
			type = rand() % 2;
			// vertical
			// []
			// []
			// []
			if (type == 0) {
				v = rand() % 9;
				h = rand() % 7;
				if (map[h][v] == 0 && map[h + 1][v] == 0 && map[h + 2][v] == 0
					//map[h][v] != WATER && map[h + 1][v] != WATER && map[h + 2][v] != WATER &&
					//map[h][v] != MONSTER_SIZE && map[h + 1][v] != MONSTER_SIZE && map[h + 2][v] != MONSTER_SIZE &&
					//map[h][v] != BIG_SIZE_1 && map[h + 1][v] != BIG_SIZE_1 && map[h + 2][v] != BIG_SIZE_1 &&
					//map[h][v] != BIG_SIZE_2 && map[h + 1][v] != BIG_SIZE_2 && map[h + 2][v] != BIG_SIZE_2
					) {
					if (bCnt == 0) {
						createVship(3, BIG_SIZE_1);
					}
					else {
						createVship(3, BIG_SIZE_2);
					}
					
					break;
				}
			}
			// horizontal
			// [][][]
			else {
				v = rand() % 7;
				h = rand() % 9;
				if (map[h][v] == 0 && map[h + 1][v] == 0 && map[h + 2][v] == 0
					//map[h][v] != WATER && map[h][v + 1] != WATER && map[h][v + 2] != WATER &&
					//map[h][v] != MONSTER_SIZE && map[h][v + 1] != MONSTER_SIZE && map[h][v + 2] != MONSTER_SIZE &&
					//map[h][v] != BIG_SIZE_1 && map[h][v + 1] != BIG_SIZE_1 && map[h][v + 2] != BIG_SIZE_1 &&
					//map[h][v] != BIG_SIZE_2 && map[h][v + 1] != BIG_SIZE_2 && map[h][v + 2] != BIG_SIZE_2 
					) {
					if (bCnt == 0) {
						createHship(3, BIG_SIZE_1);
					}
					else {
						createHship(3, BIG_SIZE_2);
					}
					break;
				}
			}
		}
	}

	// ****************
	// medium ship
	// ****************
	int mCnt;
	for (mCnt = 0; mCnt < 2; mCnt++) {
		while (1) {
			type = rand() % 2;
			// vertical
			// []
			// []
			if (type == 0) {
				v = rand() % 9;
				h = rand() % 8;
				if (map[h][v] == 0 && map[h + 1][v] == 0 && map[h + 2][v] == 0
					//map[h][v] != WATER && map[h + 1][v] != WATER && map[h + 2][v] != WATER &&
					//map[h][v] != MONSTER_SIZE && map[h + 1][v] != MONSTER_SIZE && map[h + 2][v] != MONSTER_SIZE &&
					//map[h][v] != BIG_SIZE_1 && map[h][v + 1] != BIG_SIZE_1 && map[h][v + 2] != BIG_SIZE_1 &&
					//map[h][v] != BIG_SIZE_2 && map[h][v + 1] != BIG_SIZE_2 && map[h][v + 2] != BIG_SIZE_2 &&
					//map[h][v] != MEDIUM_SIZE_1 && map[h + 1][v] != MEDIUM_SIZE_1 && map[h + 2][v] != MEDIUM_SIZE_1 &&
					//map[h][v] != MEDIUM_SIZE_2 && map[h + 1][v] != MEDIUM_SIZE_2 && map[h + 2][v] != MEDIUM_SIZE_2
					) {
					if (mCnt == 0) {
						createVship(2, MEDIUM_SIZE_1);
					}
					else {
						createVship(2, MEDIUM_SIZE_2);
					}
					break;
				}
			}
			// horizontal
			// [][]
			else {
				v = rand() % 8;
				h = rand() % 9;
				if (map[h][v] == 0 && map[h + 1][v] == 0 && map[h + 2][v] == 0
					//map[h][v] != WATER && map[h][v + 1] != WATER && map[h][v + 2] != WATER &&
					//map[h][v] != MONSTER_SIZE && map[h][v + 1] != MONSTER_SIZE && map[h][v + 2] != MONSTER_SIZE &&
					//map[h][v] != BIG_SIZE_1 && map[h][v + 1] != BIG_SIZE_1 && map[h][v + 2] != BIG_SIZE_1 &&
					//map[h][v] != BIG_SIZE_2 && map[h][v + 1] != BIG_SIZE_2 && map[h][v + 2] != BIG_SIZE_2 &&
					//map[h][v] != MEDIUM_SIZE_1 && map[h + 1][v] != MEDIUM_SIZE_1 && map[h + 2][v] != MEDIUM_SIZE_1 &&
					//map[h][v] != MEDIUM_SIZE_2 && map[h + 1][v] != MEDIUM_SIZE_2 && map[h + 2][v] != MEDIUM_SIZE_2
					) {
					if (mCnt == 0) {
						createHship(2, MEDIUM_SIZE_1);
					}
					else {
						createHship(2, MEDIUM_SIZE_2);
					}
					break;
				}
			}
		}
	}

	// ****************
	// small ship
	// ****************
	int sCnt;
	for (sCnt = 0; sCnt < 5; sCnt++) {
		while (1) {
			v = rand() % 10;
			h = rand() % 10;
			if (map[h][v] == 0) {
				if (h != 0) {
					map[h - 1][v] = WATER;
				}
				if (h != 9) {
					map[h + 1][v] = WATER;
				}
				if (v != 0) {
					map[h][v - 1] = WATER;
				}
				if (v != 9) {
					map[h][v + 1] = WATER;
				}
				//map[h][v] = SMALL_SIZE;
				switch (sCnt) {
					case 0:
						map[h][v] = SMALL_SIZE_1;
						break;
					case 1:
						map[h][v] = SMALL_SIZE_2;
						break;
					case 2:
						map[h][v] = SMALL_SIZE_3;
						break;
					case 3:
						map[h][v] = SMALL_SIZE_4;
						break;
				}
				break;
			}
		}
	}
}
