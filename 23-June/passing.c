#include <stdio.h>

void swap(int x, int y) { /* Bad implementation. Doesn't work */
  printf("Address of x is %p\n", &x);
  printf("Address of y is %p\n", &y);
  int t = x;
  x = y;
  y = t;
}

void swap2(int *x, int *y) {
  printf("x is %p\n", x);
  printf("y is %p\n", y);
  printf("Value at x is %i\n", *x);
  printf("Value at y is %i\n", *y);
  int t = *x;
  *x = *y;
  *y = t;
  }

int main(void) {
  int a = 10, b = 15;
  printf("BAD SWAP!\n");
  printf("Address of a is %p\n", &a);
  printf("Address of b is %p\n", &b);
  printf("----\n");
  printf("a is %i b is %i\n", a, b);
  swap(a, b);
  printf("a is %i b is %i\n", a, b);

  printf("GOOD SWAP!\n");
  printf("Address of a is %p\n", &a);
  printf("Address of b is %p\n", &b);
  printf("----\n");
  printf("a is %i b is %i\n", a, b);
  swap2(&a, &b);
  printf("a is %i b is %i\n", a, b);


  }
