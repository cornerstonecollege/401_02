#include <stdio.h>

union _CICCCShort
{
  short shortResult;
  char result[2]; 
};

typedef union _CICCCShort CICCCShort;


short getGreaterThan(int a, int b);

int main()
{
  CICCCShort a, b, c;
  a.shortResult = getGreaterThan(1, 2);
  b.shortResult = getGreaterThan(400, 24);
  c.shortResult = getGreaterThan(50, 50);
 
  printf("'a' variable shortResult is %i and result[0] is %i and result[1] is %i\n", a.shortResult, a.result[0], a.result[1]);
  printf("'b' variable shortResult is %i and result[0] is %i and result[1] is %i\n", b.shortResult, b.result[0], b.result[1]);
  printf("'c' variable shortResult is %i and result[0] is %i and result[1] is %i\n", c.shortResult, c.result[0], c.result[1]);
  return 0;
}

short getGreaterThan(int a, int b)
{
  CICCCShort myShort; 
  if (a > b) 
  {
    myShort.result[0] = 1;
    myShort.result[1] = 0;
  }
  else if (a == b)
  {
    myShort.result[0] = 1;
    myShort.result[1] = 1; 
  }
  else
  {
    myShort.result[0] = 0;
    myShort.result[1] = 1;
  }

  return myShort.shortResult;
}
