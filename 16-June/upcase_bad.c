#include <stdio.h>
#include <cs50.h>

void uppercase(string );

int main(void) {
  string name = get_string("Enter your name ");
  uppercase(name);
}

void uppercase(string s) {
  for (int i=0; s[i] != '\0'; i++) {
    if ((int)(s[i]) >= 97 && (int)(s[i]) <= 122) {
      printf("%c", (char)((int)(s[i]) - 32));
    } else {
    printf("%c", s[i]);
    }
  }
  printf("\n");
}

