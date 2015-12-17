#include <stdio.h>
#define LUIZ int main()
#define SREEKANTH return 0;
#define HIROSHI printf("Hello Wolrd!");

LUIZ
{
  HIROSHI

  char mytype[10] = {0};
  printf("the address of mytype: %p \nthe value of mytype:%s\n", mytype, mytype);
  printf("write a name: ");
  scanf("%s", mytype);
  printf("\nthe address of mytype: %p\nthe value of mytype:%s\n", mytype, mytype);
  printf("write a name: \n");
  scanf("%s", mytype);
  printf("\nthe address of mytype: %p\nthe value of mytype:%p %p %p\n", mytype, mytype, mytype + 0x01, &mytype[1]);
  printf("\n it seems that there is still things: %c%c%c\n", mytype[4], mytype[5], mytype[6]);
  SREEKANTH
}
