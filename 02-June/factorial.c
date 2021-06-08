#include <stdio.h>

long int factorial(long int n) {
  if (n==0) 
    return 1;
  else
    return n* factorial(n-1);
}

int main(void) {
  for (int i=0; i<25; i++) {
    printf("%i   %li\n", i, factorial(i));
    }
  }
