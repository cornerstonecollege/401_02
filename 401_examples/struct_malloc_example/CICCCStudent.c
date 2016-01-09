#include <stdlib.h>
#include "CICCCStudent.h"

// Implementation file

CICCCStudent* CICCCStudent_new(int _age, char* _name, char _grade)
{
  CICCCStudent* this = (CICCCStudent*) malloc(sizeof(CICCCStudent));
  (*this).age = _age;
  this->name = _name;
  this->grade = _grade;

  return this;
}

void CICCCStudent_release(CICCCStudent* this)
{
  free(this);
}
