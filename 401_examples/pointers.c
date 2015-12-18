#include <stdio.h>

int main()
{
  int x = 10; // &x A2F, 10
  int* y = NULL; // &y = A33, y = NULL or 0 
  y = &x; // &y = A33, y = A2F, *y = 10
  int z = *y; //z <- *A2F.: z <- 10 , &z = 37, z = 10 
  int* y2 = y; // A2F
  *y2 = 5; // *A2F <- 5
  int** addressY = &y;

  printf("The value of 'x' is %i and the address is: %p\n", x, &x);
  printf("The value of 'z' is %i and the address is: %p\n", z, &z);
  printf("The value of 'y' is %p and the address is: %p and the value of its pointing address is:%i\n", y, &y, *y);
  printf("The value of 'y2' is %p and the address is: %p and the value of its pointing address is:%i\n", y2, &y2, *y2); 
  printf("\nThe value of 'addressY' is %p and the address is: %p and the value of its pointing address is:%p\n and the value that its pointing address is pointing is:%i\n", addressY, &addressY, *addressY, **addressY);

  return 0;
}
