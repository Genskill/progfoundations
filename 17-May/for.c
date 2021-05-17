// for.c
// Indefinite - Don't know in advance how many times the loop will run (while) 
// Definite loop - We'll know in advance how many times the loop will run (for)

#include <stdio.h>

int main(void) {
  /* int count = 10; */
  for (int count = 10; // Initialiser
       count >= 0; // Check
       count--)    // Incremeter
    {
      printf("%i\n", count);
    }
  printf("Blast off!\n");
}
