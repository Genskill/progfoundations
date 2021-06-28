#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

char * upcase(char *);

int foo;

int main(void) {
  char *s = "Dennis Ritchie";
  printf("%s\n", s);
  char *us = upcase(s); // 0x123456
  printf("%s\n", us);
  free(us);
}

char * upcase(char *s) {
  int n = strlen(s);
  char ret[n+1]; /* Scope of ret : This function. Lifetime of ret : This function */
  for (int i=0; i<=strlen(s); i++) {
    ret[i] = toupper(s[i]);
  }
  return ret;
}
