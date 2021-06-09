#include <stdio.h>
#include <cs50.h>


int main(int argc, string argv[]) {
  printf("I received %i arguments\n", argc);

  for (int i=0; i<argc; i++) {
    printf("%i %s\n", i, argv[i]);
  }

  printf("Hello %s\n", argv[1]);
}
