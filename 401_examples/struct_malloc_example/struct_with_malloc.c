#include <stdio.h>
#include <stdlib.h>
#include "CICCCStudent.h"

int main()
{
  CICCCStudent* firstStudent = CICCCStudent_new(24, "Hiroshi", 'A');
  CICCCStudent* secondStudent = CICCCStudent_new(30, "Sreekanth", 'A');

  printf("First student: address:%p name:%s age:%i grade:%c\n", firstStudent, (*firstStudent).name, firstStudent->age, firstStudent->grade);

  printf("Second student: address:%p name:%s age:%i grade:%c\n", secondStudent, (*secondStudent).name, secondStudent->age, secondStudent->grade);

  CICCCStudent_release(firstStudent);
  CICCCStudent_release(secondStudent);

  return 0;
}
