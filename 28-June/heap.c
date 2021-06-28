#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *t;
  while (1) {
    t = malloc(sizeof(int) * 100); 
    for (int i=0; i<100; i++) {
      t[i] = 0;
    }
  }
}
