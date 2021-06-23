#include <stdio.h>

int printer(int *p, int c) {
  for (int i=0; i<c; i++) {
    printf("%i\n", *p);
    p++;
  }
  }

int main(void) {
  int x[] = {5, 10, 15, 20};
  printer(x, 4);
}
