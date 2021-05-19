// prime.c

#include <stdio.h>
#include <cs50.h>


int isprime(int);



int main(void) {
  int n = 1000000;//get_int("Enter maximum ");
  for (int i=2; i<=n; i++) {
    if (isprime(i)) {
      ;
      /* printf ("%i\n", i); */
    }
  }
}

int isprime(int n) {
  /* 
     Set i to 2
     for all numbers i from 2 to n
        if n % i then n is not prime
     n is prime
   */
  for (int i=2; i<n; i++) {
    if (n%i == 0) {
      return 0;
      }
  }
  return 1;
}


/* 1000000000000066600000000000001 */
