#include <stdio.h>

void foo(void);  /* declaration */


int main(void) {
  int x = 1;
  int y = 2;
  printf("%i\n", x + y);
  foo();
}

void foo(void) {  /* declaration and a definition */
  printf("Hello!\n");
}
