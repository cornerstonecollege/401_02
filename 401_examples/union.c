#include <stdio.h>

union breakInt
{
  unsigned int myInt;
  unsigned char bytes[4];
};

typedef union breakInt CICCCInt;

int main()
{
  CICCCInt x;
  printf("The size is: %lu\n", sizeof(x));
 
  x.myInt = 75109;

  printf("My number is %i: and the decimal base values of the bytes are: %i %i %i %i\n", x.myInt, x.bytes[0], x.bytes[1], x.bytes[2], x.bytes[3]);

  CICCCInt y;
  y.bytes[0] = 1;
  y.bytes[1] = 1;
  y.bytes[2] = 255;
  y.bytes[3] = 100;

  printf("For %i %i %i %i my unsigned int is: %u\n", y.bytes[0], y.bytes[1], y.bytes[2], y.bytes[3], y.myInt);

  return 0;
}
