#ifndef _CICCCStudent_H
#define _CICCCStudent_H

struct _CICCCStudent
{
  int age;
  char* name;
  char grade;
};

typedef struct _CICCCStudent CICCCStudent;

CICCCStudent* CICCCStudent_new(int _age, char* _name, char _grade);
void CICCCStudent_release(CICCCStudent* this);

#endif
