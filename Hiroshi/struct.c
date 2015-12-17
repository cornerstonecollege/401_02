#include <stdio.h>
#include <stdlib.h>

struct _Person{
  char* name;
  int age;
  char grade;
};

typedef struct _Person Person;

Person* getPerson(char* name, int age, char grade);

int main(){

  Person *Person1 =  getPerson("luiz", 12, 'A');
  printf("name %s age %i grade %c", (*Person1).name, (*Person1).age, (*Person1).grade);
  free(Person1);

  return 0;
}


Person* getPerson(char* name, int age, char grade)
{
  Person *p;
  p = (Person *) malloc(sizeof(Person));
  (*p).name = name;
  (*p).age = age;
  (*p).grade = grade;
  return p;
}
