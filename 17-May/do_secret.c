// do_secret.c
// Secret number guessing game! (do/while version)

#include <stdio.h>
#include <cs50.h>


int main(void) {
  int secret = 42; // Exercise : Try making this a random number. Use the random function. Check the cs50 manual page https://manual.cs50.io/3/random
  int guess;

  do {
    guess = get_int("Enter your guess ");
    if (guess == secret) {
      printf("You got it!\n");
    } else if (guess > secret) {
      printf("Guess lower\n");
    } else {
      printf("Guess higher\n");
    }
  } while (guess != secret);
}
