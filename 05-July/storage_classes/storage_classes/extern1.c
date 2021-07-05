#include <stdio.h>

int x; /*Definition? Or a Declaration? Or Both?*/
extern int y; /* Declaration only */

int main(void) {
  printf("%i\n", x);
  printf("%i\n", y);
}
