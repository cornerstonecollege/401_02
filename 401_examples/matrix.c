#include <stdio.h>

int main()
{
  char mytype[5][10] = {0};
  
  for (int i = 0; i < 5; i++)
  { 
    printf("write the student %i name:\n", i);
    scanf("%s", mytype[i]);
  }
  
  printf("\n");
  for(int i = 0; i < 5; i++) 
    printf("Student name: %s\n", mytype[i]);

  return 0;
}
