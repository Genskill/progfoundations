#include <stdio.h>

int auto_demo(int);
int static_demo(int);


int main(void) {
  printf("Auto 1 %i\n", auto_demo(2));
  printf("Auto 2 %i\n", auto_demo(2));
  printf("Auto 3 %i\n", auto_demo(2));

  printf("Static 1 %i\n", static_demo(2));
  printf("Static 2 %i\n", static_demo(2));
  printf("Static 3 %i\n", static_demo(2));
}


int auto_demo(int n) {
  int x = 0;
  if (x == 0) {
    x = 10;
  } else {
    x = x + n;
  }
  return x;
}

int static_demo(int n) {
  static int x = 0;
  if (x == 0) {
    x = 10;
  } else {
    x = x + n;
  }
  return x;
}
