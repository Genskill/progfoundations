#include <stdio.h>
#include <cs50.h>
#include <string.h>

void encrypt(string s);

int main(int argc, string argv[]) {
  /* printf("Number of arguments is %i\n", argc); */
  if (argc == 1) {
    printf("Usage %s [words to encrypt]\n", argv[0]);
    return 1; /* Returning non zero in UNIX indicates an error. This is the "EXIT STATUS" */
  } else {
    for (int i=1; i<argc; i++) {
      encrypt(argv[i]);
    }
    return 0; /* Returning 0 indicates a successful run */
  }
  /* encrypt(s); */
}

void encrypt(string s) {
  for (int i=0; i<strlen(s); i++) {
    printf("%c", s[i]+1); /*ERROR : Will not work for 'z' */
  }
  printf("\n");
}
