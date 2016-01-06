#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

#define MONSTER_SIZE 5
#define MONSTER_VALUE 1

#define BIG_SIZE 3
#define BIG_VALUE_A 2
#define BIG_VALUE_B 3

#define MEDIUM_SIZE 2
#define MEDIUM_VALUE_A 4
#define MEDIUM_VALUE_B 5

#define SMALL_SIZE 1
#define SMALL_VALUE_A 6
#define SMALL_VALUE_B 7
#define SMALL_VALUE_C 8
#define SMALL_VALUE_D 9
#define SMALL_VALUE_E 10

#define HORIZONTAL 0
#define VERTICAL 1
#define ORIENTATION_PROBABILITY 2

typedef char matrix_byte;
typedef char orientation;

void createMonsterShip(matrix_byte m[SIZE][SIZE]);

int main()
{
	matrix_byte matrix[SIZE][SIZE] = {0};
 	createMonsterShip(matrix);   

 	for(int i = 0; i < SIZE; i++)
 	{
 		for(int j = 0; j < SIZE; j++)
 		{
 			printf("%i ", matrix[i][j]);
 		}

 		printf("\n");
 	}

	return 0;
}

void createMonsterShip(matrix_byte m[SIZE][SIZE])
{
	time_t t;
    srand((unsigned) time(&t));
	orientation firstShipOrientation = rand() % ORIENTATION_PROBABILITY;
	
	int monsterShipX = -1;
	int monsterShipY = -1;

	if (firstShipOrientation == VERTICAL)
	{
		monsterShipX = rand() % (SIZE - MONSTER_SIZE + 1);
		monsterShipY = rand() % SIZE;

		m[monsterShipX][monsterShipY] = MONSTER_VALUE;
		m[monsterShipX + 1][monsterShipY] = MONSTER_VALUE;
		m[monsterShipX + 2][monsterShipY] = MONSTER_VALUE;
		m[monsterShipX + 3][monsterShipY] = MONSTER_VALUE;
		m[monsterShipX + 4][monsterShipY] = MONSTER_VALUE;
	}
	else
	{
		monsterShipX = rand() % SIZE;
		monsterShipY = rand() % (SIZE - MONSTER_SIZE + 1);
		
		m[monsterShipX][monsterShipY] = MONSTER_VALUE;
		m[monsterShipX][monsterShipY + 1] = MONSTER_VALUE;
		m[monsterShipX][monsterShipY + 2] = MONSTER_VALUE;
		m[monsterShipX][monsterShipY + 3] = MONSTER_VALUE;
		m[monsterShipX][monsterShipY + 4] = MONSTER_VALUE;
	}
}



