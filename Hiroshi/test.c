#include <stdio.h>
#include <stdlib.h>

int main()
{
  char myarray[10] = {0};
  char* wow = myarray;
  printf("Write something\n");
  scanf("%s", myarray);
  printf("%p %c\n", myarray, *myarray);
  
  while(*wow != '\0')
  {
    putchar(*wow);
    wow += 0x01; 
  }
  putchar('\n');
  return 0;
}
