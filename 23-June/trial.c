#include <stdio.h>

int main(void) {
  int a = 42;
  int *p; /* = &a; */
  p = &a;
  printf("%p\n", p);

  *p = &a; /* Error */
}
