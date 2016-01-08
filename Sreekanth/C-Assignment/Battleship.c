#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

#define WATER_VALUE 0

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
void createBigShips(matrix_byte m[SIZE][SIZE]);
void createMediumShips(matrix_byte m[SIZE][SIZE]);
void createSmallShips(matrix_byte m[SIZE][SIZE]);


int main()
{
	matrix_byte matrix[SIZE][SIZE] = {WATER_VALUE};
 	createMonsterShip(matrix); 
 	createBigShips(matrix); 
 	createMediumShips(matrix);
 	createSmallShips(matrix); 

 	for(int i = 0; i < SIZE; i++)
 	{
 		for(int j = 0; j < SIZE; j++)
 		{
 			printf("%i ", matrix[i][j]);
 			if (matrix[i][j] != SMALL_VALUE_E)
 				printf(" ");
 		}

 		printf("\n");
 	}

	return 0;
}

void createMonsterShip(matrix_byte m[SIZE][SIZE])
{
	time_t t;
    srand((unsigned) time(&t));
	orientation monsterShipOrientation = rand() % ORIENTATION_PROBABILITY;
	
	int monsterShipX = -1;
	int monsterShipY = -1;

	if (monsterShipOrientation == VERTICAL)
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

void createBigShips(matrix_byte m[SIZE][SIZE])
{
	// BIGSHIP A

	int BigShipAX = -1;
	int BigShipAY = -1;

    while (true)
    {
		BigShipAX = rand() % (SIZE - BIG_SIZE + 1);
		BigShipAY = rand() % (SIZE);

	    if (m[BigShipAX][BigShipAY] != WATER_VALUE || 
	    	m[BigShipAX + 1][BigShipAY] != WATER_VALUE || 
	    	m[BigShipAX + 2][BigShipAY] != WATER_VALUE)
		{
			continue;
		}
	    

	    m[BigShipAX][BigShipAY] = BIG_VALUE_A;
		m[BigShipAX + 1][BigShipAY] = BIG_VALUE_A;
		m[BigShipAX + 2][BigShipAY] = BIG_VALUE_A;
		break;
	}

	// BIGSHIP B

	int BigShipBX = -1;
	int BigShipBY = -1;

	while(true)
	{

		BigShipBX = rand() % (SIZE - BIG_SIZE + 1);
		BigShipBY = rand() % (SIZE);

		if (m[BigShipBX][BigShipBY] != WATER_VALUE || 
			m[BigShipBX + 1][BigShipBY] != WATER_VALUE ||
			m[BigShipBX + 2][BigShipBY] != WATER_VALUE)
		{
			continue;
		}

	    m[BigShipBX][BigShipBY] = BIG_VALUE_B;
		m[BigShipBX + 1][BigShipBY] = BIG_VALUE_B;
		m[BigShipBX + 2][BigShipBY] = BIG_VALUE_B;
		break;

	}
}

void createMediumShips(matrix_byte m[SIZE][SIZE])
{
	// MediumShip A

	int mediumShipAX = -1;
	int mediumShipAY = -1;

	while(true)
	{
		mediumShipAX = rand() % (SIZE);
		mediumShipAY = rand() % (SIZE - MEDIUM_SIZE + 1);


	if (m[mediumShipAX][mediumShipAY] != WATER_VALUE || m[mediumShipAX][mediumShipAY + 1] != WATER_VALUE)
	{
		continue;
	}

	m[mediumShipAX][mediumShipAY] = MEDIUM_VALUE_A;
	m[mediumShipAX][mediumShipAY + 1] = MEDIUM_VALUE_A;
	break;
	}
	// MediumShip B

	int mediumShipBX = -1;
	int mediumShipBY = -1;

	while(true)
	{
		mediumShipBX = rand() % (SIZE);
		mediumShipBY = rand() % (SIZE - MEDIUM_SIZE + 1);

	if (m[mediumShipBX][mediumShipBY] != WATER_VALUE || m[mediumShipBX][mediumShipBY + 1] != WATER_VALUE)
	{
		continue;
	}

	m[mediumShipBX][mediumShipBY] = MEDIUM_VALUE_B;
	m[mediumShipBX][mediumShipBY + 1] = MEDIUM_VALUE_B;
	break;
	}
}

void createSmallShips(matrix_byte m[SIZE][SIZE])
{
	//SmallShip a

	int smallShipAX = -1;
	int smallShipAY = -1;

	while(true)
	{
		smallShipAX = rand() % (SIZE);
		smallShipAY = rand() % (SIZE);

		if (m[smallShipAX][smallShipAY] != WATER_VALUE)
		{
			continue;
		}	

		m[smallShipAX][smallShipAY] = SMALL_VALUE_A;
		
		break;
	}

	//SmallShip B

	int smallShipBX = -1;
	int smallShipBY = -1;

	while(true)
	{
		smallShipBX = rand() % (SIZE);
		smallShipBY = rand() % (SIZE);

		if (m[smallShipBX][smallShipBY] != WATER_VALUE)
		{
			continue;
		}

		

		m[smallShipBX][smallShipBY] = SMALL_VALUE_B;
		
		break;
	}

	//SmallShip C

	int smallShipCX = -1;
	int smallShipCY = -1;

	while(true)
	{
		smallShipCX = rand() % (SIZE);
		smallShipCY = rand() % (SIZE);

	if (m[smallShipCX][smallShipCY] != WATER_VALUE)
	{
		continue;
	}

	

	m[smallShipCX][smallShipCY] = SMALL_VALUE_C;
	
	break;
	}

	//SmallShip D

	int smallShipDX = -1;
	int smallShipDY = -1;

	while(true)
	{
		smallShipDX = rand() % (SIZE);
		smallShipDY = rand() % (SIZE);

	if (m[smallShipDX][smallShipDY] != WATER_VALUE)
	{
		continue;
	}

	

	m[smallShipDX][smallShipDY] = SMALL_VALUE_D;
	
	break;
	}

	//SmallShip E

	int smallShipEX = -1;
	int smallShipEY = -1;

	while(true)
	{
		smallShipEX = rand() % (SIZE);
		smallShipEY = rand() % (SIZE);

	if (m[smallShipEX][smallShipEY] != WATER_VALUE)
	{
		continue;
	}

	

	m[smallShipEX][smallShipEY] = SMALL_VALUE_E;
	
	break;
	}


}

	



