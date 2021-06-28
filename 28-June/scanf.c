#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main() {
  char *s = get_string("Enter your name ");
  printf("%s\n", s);

  char *t = malloc(50);
  printf("Enter your name ");
  scanf("%s", t);
  printf("%s\n", t);
  
  }
