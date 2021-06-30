#include <stdio.h>

int main(void) {
  FILE *fp; 
  int x = 10;
  fp = fopen("something.txt", "w");
  fprintf(fp, "%i\n", x);
  fclose(fp);
}

