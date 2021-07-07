#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int isprime(int); // done
int *factors(int); // done
int *digits(int); // done
long int factorial(int);
int sum(int *);


float f(int n) {
  if (! isprime(n))
    return (float)(factorial(n)) / (float)(sum(factors(n))) ;
  else 
    return (float)(factorial(n)) / (float)(sum(digits(n))) ;
}

int sum(int *list) {
  int total = 0;
  for (int i=0; list[i] != -1; i++) {
    total += list[i];
    }
  return total;
}

long int factorial(int n) {
  if (n == 0 ) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}


int *digits(int n) {
  int *ret = malloc(sizeof(int) * n);
  char sn[n];
  sprintf(sn, "%i", n);
  int i;
  for (i=0; i<strlen(sn); i++) {
    ret[i] = (int)sn[i] - '0'; 
  }
  ret[i] = -1;
  return ret;
}
  

int *factors(int n) {
  int primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
  int *ret = malloc(sizeof(int) * n);
  int prime_idx = 0;
  int f_idx = 0;
  while (n != 1 || prime_idx < 25) {
    /* printf("%i\n", primes[prime_idx]); */
    int prime = primes[prime_idx];
    if (n%prime == 0) {
      ret[f_idx++] = prime;
      n = n/prime;
    } else {
      prime_idx ++;
    }
  }
  ret[f_idx] = -1; /* TO indicate ending of this array
 */
  return ret;
}

int isprime(int n) {
  /* Returns 1 if n is prime. 0 otherwise */
  for (int i=2; i<n; i++) {
    if (n%i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  printf("%i\n", factorial(22));
  printf("%f\n", f(33));
  printf("%f\n", f(43));
}

