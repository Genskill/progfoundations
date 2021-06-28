#include <stdio.h>

void print(int x, char *y[]) {
  for (int i=0; i<x; i++) {
    printf("  %i.  %s\n", i+1, y[i]);
  }
}

int main(int argc, char *argv[]) {
  printf("Args = %i\n", argc);

  print(argc, argv);
  }

