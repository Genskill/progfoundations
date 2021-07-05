#include <stdio.h>

int main(void) {
  char x[100];
  fgets(x, 100, stdin);
  printf("%s\n", x);
  }
