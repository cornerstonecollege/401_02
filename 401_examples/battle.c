#include <stdio.h>

int main()
{
  char matrix[12][12] = {0};

  matrix[0][0] = 1;
  matrix[1][0] = 1;
  
  for (int row = 0; row < 12; row++)
  {
    printf("[");
    for (int col = 0; col < 12; col++ )
    {
      printf(" %i", matrix[row][col]);
    }
    printf(" ]\n");
  }

  return 0;
}
