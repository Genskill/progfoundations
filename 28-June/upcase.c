#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

char * upcase(char *);

int foo;

int main(void) {
  char *s = get_string("Enter a name ");
  printf("%s\n", s);
  char *us = upcase(s); // 0x123456
  printf("%s\n", us);
}

char * upcase(char *s) {
  int n = strlen(s);
  /* char ret[n+1]; */ /*Scope of ret : This function. Lifetime of ret : This function */
  char *ret = malloc (sizeof(char) * (strlen(s)+1));/*Scope of ret : This function. Lifetime of ret is when this is manually freed */
  for (int i=0; i<=strlen(s); i++) {
    ret[i] = toupper(s[i]);
  }
  printf("%s\n", ret);
  return ret;
}
