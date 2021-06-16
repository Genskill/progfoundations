#include <stdio.h>
#include <cs50.h>
#include <string.h>

void encrypt(string s);

int main(void) {
  string s = get_string("Enter cleartext ");
  encrypt(s);
}

void encrypt(string s) {
  for (int i=0; i<strlen(s); i++) {
    printf("%c", s[i]+1); /*ERROR : Will not work for 'z' */
  }
  printf("\n");
}
