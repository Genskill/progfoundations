#include <stdio.h>

typedef int colour[3]; /* A new alias called colour for int[3] */

int main(void) {
  colour c = {255, 255, 128};
  /* int c[3] =  {255, 255, 128}; */

  printf("%i %i %i\n",c[0], c[1], c[2]);
  }
