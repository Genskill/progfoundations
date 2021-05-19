// prime.c

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int isprime(long long int);



int main(void) {
  long long int n = 10000000;//get_int("Enter maximum ");
  for (long long int i=2; i<=n; i++) {
    if (isprime(i)) {
      ;
      /* printf ("%i\n", i); */
    }
  }
}

int isprime(long long int n) {
  /* 
     Set i to 2
     for all numbers i from 2 to n
        if n % i then n is not prime
     n is prime
   */
  if (n%2 == 0) {
    if (n==2) 
      return 1;
    else
      return 0;
  }

  if (n%3 == 0) {
    if (n==3) 
      return 1;
    else
      return 0;
  }

  if (n%5 == 0) {
    if (n==5) 
      return 1;
    else
      return 0;
  }


  for (long long int i=7; i<sqrt(n); i+=2) {
    if (n%i == 0) {
      return 0;
      }
  }
  return 1;
}


/* 1000000000000066600000000000001 */
