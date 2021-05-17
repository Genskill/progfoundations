// fizzbizz.c

// Write a program that will take a number n as input and print numbers from 1 to n subject to the following rules
// If n is divisible by 3, print fizz
// If n is divisible by 5, print bizz
// If n is divisible by 15, print fizzbizz
// Otherwise, just print n

#include <stdio.h>
#include <cs50.h>


int main(void) {
  int limit = get_int("Upto? ");
  for (int i=1; i<=limit; i++) {
    if (i%15 == 0) {
      printf("Fizzbizz\n");
    } else if (i%3 == 0) {
      printf("fizz\n");
    } else if (i%5 == 0) {
      printf("bizz\n");
    } else {
      printf("%i\n", i);
    }
  }
}
