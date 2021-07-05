#include <stdio.h>

int int_reader() {
  int x,y;
  scanf("%i.%i", &x, &y);
  printf("Output is %i.%i\n", x, y);
}

int main(void) {
  char x[100];
  /* scanf("%[abcd]", x); /\* Read strings only with a, b, c or d *\/ */
  /* printf("%s \n", x); */
  /* scanf("%[^abcd\n]", x); /\* Read strings only without a, b, c, d, and \n *\/ */
  /* printf("%s \n", x); */
  scanf("%[^\n]", x); /* Read strings only without \n (including spaces)*/
  printf("%s \n", x);
  }
