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
bool stopLoopWithMatrix(matrix_byte m[SIZE][SIZE]);

char nShotsOnMonsterShip = 0;
char nShotsOnBigShipA = 0;
char nShotsOnBigShipB = 0;
char nShotsOnMediumShipA = 0;
char nShotsOnMediumShipB = 0;

// for small ships we don't need to count, because their size is 1

int main()
{
	matrix_byte matrix[SIZE][SIZE] = {WATER_VALUE};
 	createMonsterShip(matrix); 
 	createBigShips(matrix); 
 	createMediumShips(matrix);
 	createSmallShips(matrix); 
 	int row;
 	int col;

 	printf("Question 0: How many libraries are you using and why? \n"
 			"Answer: I am using 4 libraries. stdio.h for basic input and output like printf and scanf\n"
 			"stdbool.h for boolean function,time.h for system time object and stdlib.h for random function.\n"
 			"Question 1: What is the size of your new type(your matrix in bytes)?\n"
 			"Answer:100\n"
 			 "Question 3: What is the type of your matrix? Why did you choose that?\n"
 			 "Answer:matrix_byte, to be easier to understand the code\n");

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


 	while(!stopLoopWithMatrix(matrix))
 	{
 		printf("Please enter the number of row: \n");	
 		scanf("%i",&row);
 		printf("Please enter the number of column: \n");	
 		scanf("%i",&col);

 		if(matrix[row][col] == WATER_VALUE)
 			printf("Miss the Ship\n");
	 	else
	 	{
	 		matrix_byte value = matrix[row][col];
	 		
	 		// the ship was shot
	 		matrix[row][col] = WATER_VALUE;
	 		
	 		switch(value)
	 		{
	 			case MONSTER_VALUE:
	 			{
	 				nShotsOnMonsterShip++;
	 				if (nShotsOnMonsterShip == MONSTER_SIZE)
	 				{
	 					printf("you've just destroyed a Monster Ship!\n");
	 				}
	 				else
	 				{
	 					printf("You just shot a Monster Ship\n");
	 				}
	 				break;
	 			}

	 			case BIG_VALUE_A:
	 			{
	 				nShotsOnBigShipA++;
	 				if(nShotsOnBigShipA == BIG_SIZE)
	 				{
	 					printf("you've just destroyed a Big Ship A!\n");
	 				}
	 				else
	 				{
	 					printf("You just shot a Big Ship A\n");
	 				}
	 				break;
	 			}

	 			case BIG_VALUE_B:
	 			{
	 				nShotsOnBigShipB++;
	 				if(nShotsOnBigShipB == BIG_SIZE)
	 				{
	 					printf("you've just destroyed a Big Ship B!\n");
	 				}
	 				else
	 				{
	 					printf("You just shot a Big Ship B\n");
	 				}
	 				break;
	 			}

	 			case MEDIUM_VALUE_A:
	 			{
	 				 nShotsOnMediumShipA++;
	 				if( nShotsOnMediumShipA == MEDIUM_SIZE)
	 				{
	 					printf("you've just destroyed a Medium Ship A!\n");
	 				}
	 				else
	 				{
	 					printf("You just shot a Medium Ship A \n");
	 				}
	 				break;
	 			}

	 			case MEDIUM_VALUE_B:
	 			{
	 				 nShotsOnMediumShipB++;
	 				if( nShotsOnMediumShipB == MEDIUM_SIZE)
	 				{
	 					printf("you've just destroyed a Medium Ship B!\n");
	 				}
	 				else
	 				{
	 					printf("You just shot a Medium Ship B \n");
	 				}
	 				break;
	 			}

	 			case SMALL_VALUE_A:
	 			{
	 				printf("you've just destroyed a Small Ship A!\n");
	 				break;
	 			}

	 			case SMALL_VALUE_B:
	 			{
	 				printf("you've just destroyed a Small Ship B!\n");
	 				break;
	 			}

	 			case SMALL_VALUE_C:
	 			{
	 				printf("you've just destroyed a Small Ship C!\n");
	 				break;
	 			}

	 			case SMALL_VALUE_D:
	 			{
	 				printf("you've just destroyed a Small Ship D!\n");
	 				break;
	 			}

	 			case SMALL_VALUE_E:
	 			{
	 				printf("you've just destroyed a Small Ship E!\n");
	 				break;
	 			}
	 		}
	 	}
	 }

	 printf(" Congrats !!! You Won the Game !!\n");

	return 0;
}

bool stopLoopWithMatrix(matrix_byte m[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (m[i][j] != WATER_VALUE)
				return false;
		}
	}

	return true;
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

	



