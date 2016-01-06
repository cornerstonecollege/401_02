#include <stdio.h>

typedef char matrix_block;

int main()
{
  matrix_block myMatrix[10][10];
  printf ("My matrix size is %lu bytes\n", sizeof(myMatrix));  
  return 0;
}
