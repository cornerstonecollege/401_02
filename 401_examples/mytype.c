#include <stdio.h>
#define fourbytes int


typedef unsigned char onebyte;
typedef short twobytes;

int main()
{
  onebyte a = 3;
  onebyte b = 5;
  onebyte sum = a + b;
  printf("The value of sum is %i\n", sum);

  onebyte c = 200;
  onebyte d = 240; 
  fourbytes sum2 = c + d;
  printf("The value of sum 2 is %i\n", sum2);
  
  float div = (float)5 / 3;
  printf("My div is %f", div);

  return 0;
}
