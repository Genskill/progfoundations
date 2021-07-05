#include <stdio.h>

void foo(void);

int main(void) {
  foo();
}

void foo(){
  register int x = 10;
  printf("%i\n", x);
  }
