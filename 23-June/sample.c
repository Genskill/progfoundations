#include <stdio.h>
#include <cs50.h>

typedef struct {
  string name;
  int age;
} person;
  

int main(void) {
  person p = {.name = "Noufal", .age = 40};
  printf("%s %d\n", p.name, p.age);

  person *q = &p;
  printf("%s %d\n", (*q).name, (*q).age);

  printf("%s %d\n", q->name, q->age);
  }
