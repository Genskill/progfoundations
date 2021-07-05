#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x[6] = {0};
  printf("%li\n", sizeof(x)/sizeof(x[0]));

  int *y = malloc(sizeof(int) * 6);
  printf("%li\n", sizeof(y)/sizeof(y[0]));
}
