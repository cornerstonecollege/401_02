#include <stdio.h>

struct class_401
{
  char studentName[10];
  int age;
};

typedef struct class_401 CICCCClass;

int main()
{
  CICCCClass student1;
  CICCCClass student2;
 
  printf("The size of the struct is: %i\n", sizeof(CICCCClass));

  printf("Please insert student 1 name and age:\n");
  scanf("%s %i", student1.studentName, &(student1.age));

  printf("Please insert student 2 name and age:\n");
  scanf("%s %i", student2.studentName, &(student2.age));

  printf("Students are called: %s %s and their age are:%i %i\n", student1.studentName, student2.studentName, student1.age, student2.age);
  
  return 0;
}
