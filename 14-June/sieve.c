#include <stdio.h>

int get_primes(int[], int);

void print_array(int nos[], int count) {
  for(int i=0; i<count; i++) {
    printf("%i ", nos[i]);
    }
  printf("\n");
}

int main(void) {
  int primes[200] = {0};
  int count = get_primes(primes, 100);
  print_array(primes, count);
}

int get_primes(int primes[], int max) {
  int cancelled[max];
  for (int i=0; i<max; i++) {
    cancelled[i] = 0;
  }
  int idx = 0;
  
  for (int i=2; i<=max; i++) {
    if (! cancelled[i]) { /* Is element of */
      primes[idx] = i;
      idx++;
      for (int j=i; j<=max; j+=i) {
        cancelled[j] = 1; /* Add element to the set */
      }
    }
  }
  return idx;
}
