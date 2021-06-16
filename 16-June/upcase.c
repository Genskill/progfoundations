#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void uppercase(string );

int main(void) {
  string name = get_string("Enter your name ");
  uppercase(name);
}

void uppercase(string s) {
  for (int i=0; i<strlen(s); i++) {
    printf("%c", toupper(s[i]));
    /* if (islower(s[i])) { */
    /*   printf("%c", toupper(s[i])); */
    /* } else { */
    /*   printf("%c", s[i]); */
    /* } */
  }
  printf("\n");
}




