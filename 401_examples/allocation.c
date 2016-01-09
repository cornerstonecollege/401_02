#include <stdio.h>
#include <stdlib.h>

int main()
{
  int* x = (int*) malloc(sizeof(int));
  *x = 2;
  printf("The address is %p and the value is %d\n", x, *x);
  
  x = (int *) realloc(x, sizeof(int) * 3);
  *(x + 1) = 3;
  *(x + 2) = 4;

  x[1] = 3;
  x[2] = 2;

  free(x);

  return 0;
}
