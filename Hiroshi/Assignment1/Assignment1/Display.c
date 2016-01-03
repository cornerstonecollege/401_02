#include "./BattleShip.h"

char map[ROW_SIZE][COLUM_SIZE];			// result map
char userMap[ROW_SIZE][COLUM_SIZE];		// user map which is current map is used for users
int cntFinish;							// finish counter
int cntMon = 0;							// monster ship counter : check the monster ship is destroyed or not
int cntBig1 = 0, cntBig2 = 0;			// big ship counter : check the big ship is destroyed or not
int cntMed1 = 0, cntMed2 = 0;			// medium ship counter : check the medium ship is destroyed or not

// **********************************************
// (counterShips)
// OUTLINE		: count each ships.
//				  if user destroy a ship, 
//				  the message is shown up
//				  such as "You've destroyed a ship"
// PARAMETERS	: int rowNum	(row number)
//				  int columNum	(colum number)
// **********************************************
void counterShips(int rowNum, int columNum) {

	if (userMap[rowNum][columNum] == 0) {
		switch (map[rowNum][columNum]) {
		case MONSTER_SIZE:
			cntMon += 1;
			if (cntMon == MONSTER) {
				printf(" You've destroyed\n MonsterShip\n");
			}
			break;
		case BIG_SIZE_1:
			cntBig1 += 1;
			if (cntBig1 == BIG) {
				printf(" You've destroyed\n BigShip 1\n");
			}
			break;
		case BIG_SIZE_2:
			cntBig2 += 1;
			if (cntBig2 == BIG) {
				printf(" You've destroyed\n BigShip 2\n");
			}
			break;
		case MEDIUM_SIZE_1:
			cntMed1 += 1;
			if (cntMed1 == MEDIUM) {
				printf(" You've destroyed\n MediumShip 1\n");
			}
			break;
		case MEDIUM_SIZE_2:
			cntMed2 += 1;
			if (cntMed2 == MEDIUM) {
				printf(" You've destroyed\n MediumShip 2\n");
			}
			break;
		case SMALL_SIZE_1:
			printf(" You've destroyed\n SmallShip 1\n");
			break;
		case SMALL_SIZE_2:
			printf(" You've destroyed\n SmallShip 2\n");
			break;
		case SMALL_SIZE_3:
			printf(" You've destroyed\n SmallShip 3\n");
			break;
		case SMALL_SIZE_4:
			printf(" You've destroyed\n SmallShip 4\n");
			break;
		}
	}
	userMap[rowNum][columNum] = map[rowNum][columNum];
}

// **********************************************
// (displayMap)
// OUTLINE		: display map
// PARAMETERS	: int rowNum	(row number)
//				  int columNum	(colum number)
// **********************************************
void displayMap(int rowNum, int columNum) {

	if (map[rowNum][columNum] == MONSTER_SIZE ||
		map[rowNum][columNum] == BIG_SIZE_1 || map[rowNum][columNum] == BIG_SIZE_2 ||
		map[rowNum][columNum] == MEDIUM_SIZE_1 || map[rowNum][columNum] == MEDIUM_SIZE_2 || 
		map[rowNum][columNum] == SMALL_SIZE_1 || map[rowNum][columNum] == SMALL_SIZE_2 ||
		map[rowNum][columNum] == SMALL_SIZE_3 || map[rowNum][columNum] == SMALL_SIZE_4 ) {

		printf("=====================\n");
		printf("\tHIT\n");
		
		counterShips(rowNum, columNum);
		printf("=====================\n\n");
		cntFinish += 1;
	}
	else {
		printf("=====================\n");
		printf("\tMISS\n");
		printf("=====================\n\n");

		userMap[rowNum][columNum] = 'X';
	}

	printf("      1 2 3 4 5 6 7 8 9 10\n");
	printf("    +---------------------+\n");

	// check the ships of the row in the map
	for (int row = 0; row < 10; row++) {
		if (row + 1 < 10) {
			printf(" %d  |", row + 1);
		}
		else {
			printf(" %d |", row + 1);
		}
		// check the ships of the colum in the map
		for (int colum = 0; colum < 10; colum++) {
			// if the point is null, put '0' in the map
			//if (userMap[row][colum] == '\0') {
			//	userMap[row][colum] = WATER;
			//}
			printf(" %c", userMap[row][colum]);
		}
		printf(" |\n");
	}
	printf("    +---------------------+\n");
	printf("      1 2 3 4 5 6 7 8 9 10\n\n");
}

// ----------------------------------------------
// CONFIRM THE SHIP'S LOCATION (DEBUG)
// ----------------------------------------------
// **********************************************
// (displayShips)
// OUTLINE		: display ship
// **********************************************
void displayShips() {
	printf("      1 2 3 4 5 6 7 8 9 10\n");
	printf("    +---------------------+\n");

	// check the ships of the row in the map
	for (int row = 0; row < 10; row++) {
		if (row + 1 < 10) {
			printf(" %d  |", row + 1);
		}
		else {
			printf(" %d |", row + 1);
		}
		// check the ships of the colum in the map
		for (int colum = 0; colum < 10; colum++) {
			// if the point is null, put '0' in the map
			if (map[row][colum] == 0) {
				map[row][colum] = WATER;
			}
			printf(" %c", map[row][colum]);
		}
		printf(" |\n");
	}
	printf("    +---------------------+\n");
	printf("      1 2 3 4 5 6 7 8 9 10\n");
}