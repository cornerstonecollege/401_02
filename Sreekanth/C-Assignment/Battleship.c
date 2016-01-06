#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HORIZONTAL 0
#define VERTICAL 1

typedef char matrix_block;
typedef char orientation;

int main ()
{

matrix_block myMatrix[10][10];
for(int i=0;i<10;i++)
{
	for(int j=o;j<10;j++)
	{
		matrix[i][j]=0;
	}
}
time_t t;

srand((unsigned)time(&t));

orientation firstShipOrientatrion = rand()% 2;

if(firstShipOrientatrion == HORIZONTAL)

	printf("HORIZONTAL\n");
else
	printf("VERTICAL\n");

return 0;

}