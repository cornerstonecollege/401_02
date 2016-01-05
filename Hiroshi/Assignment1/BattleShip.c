// **** ASSIGNMENT1 *************************************************************
//
//		BATTLE SHIP GAME
//								By		Hiroshi Tokutomi
//								DATE	12/28/2015
//
// QUESTION 0
//		I used 3 liblaries which are stdio.h, stdlib.h and time.h.
//		1. stdio.h is used for "printf and scanf"
//		2. stdlib.h is used for "atoi"
//		3. time.h is used for "time"
//			To create rundom numbers when users click exe file
//
// QUESTION 1
//		I made 10 * 10 matrix by char. This Battle ship field is used 100 bytes.
//
// QUESTION 3
//		The matrix type is "char" because "char" is used 1 byte each.
//		In the battle ship field, we recognize ships by numbers.
//
// **************l***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include "./BattleShip.h"

extern int cntFinish = 0;			// finish counter. when the ship is detective, it's counted up

int main() {

	char rowNum[2], columNum[2];			// get a row and a colum number from the terminal 
	int convRow, convColum;			// convert from char to int (row and colum)
	int cntTotal = 1;				// game counter. If this counter is more than 50 times, the game will be over 

	printf("****************************************\n");
	printf("\tLet's play BATTLE SHIP\n");
	printf("****************************************\n\n");

	// create ships
	createShips();

	while (1) {
		while (1) {
			printf("type the row number   (1 - 10)\t");
			scanf("\n%s", rowNum);
			printf("type the colum number (1 - 10)\t");
			scanf("\n%s", columNum);
			// selected numbers(row and colum) are more than 0, less than 11 and not allowed except numbers
			if (atoi(rowNum) != 0 && atoi(columNum) != 0 &&
				atoi(rowNum) < 11  && atoi(columNum) < 11 &&
				atoi(rowNum) > 0 && atoi(columNum) > 0) {
				printf("row : %s, colum : %s, Total times : %d\n\n", rowNum, columNum, cntTotal);
				break;
			}
			else {
				printf("Type number again\n\n");
			}
		}
		getchar();

		// convert char to int (row and colum)
		convRow = atoi(rowNum);
		convColum = atoi(columNum);
		// display map
		displayMap(convRow - 1, convColum - 1);		// the start position is 0 in array
													// subtract 1 from selected row and colum

		if (cntFinish == CNT_FINISH) {
			printf("****************************************\n");
			printf("\tConglatulation\n");
			printf("\tYOUR RECORD : %d times\n", cntTotal);
			printf("****************************************\n\n");
			getchar();
			exit(0);
		}

		if (cntTotal == CNT_LIMIT) {
			printf("****************************************\n");
			printf("\tGAME OVER\n");
			printf("\tPLAY AGAIN\n");
			printf("****************************************\n\n");
			getchar();
			exit(0);
		}
		cntTotal++;
	}
	
	// DEBUG
	// display the map and ships -> result of the map
	//displayShips();

	return 0;
}
