#include <stdio.h>

int main(void) {
  FILE *fp = fopen("something_else.txt", "a");
  fprintf(fp, "Hi there!\n");
  fclose(fp);
}
