#include <stdio.h>
#include <stdlib.h>

struct _CICCCPerson
{
  char *name;
  int id;
  void (*setName)(struct _CICCCPerson*, char*);
};

typedef struct _CICCCPerson CICCCPerson;

void setterForName(CICCCPerson *this, char *name);

int main()
{
  CICCCPerson *person = (CICCCPerson *) malloc(sizeof(CICCCPerson));
  person->setName = &setterForName;
  (*person).id = 1;
  person->setName(person, "Hiroshi");
  printf("Person name: %s Id:%i\n", person->name, person->id);
  free(person);
  return 0;
}

void setterForName(CICCCPerson *this, char *name)
{
  //(*this).name = name;
  this->name = name;
}
