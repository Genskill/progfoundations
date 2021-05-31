#include <assert.h>
#include <stdio.h>
#include <cs50.h>


float raise_to(float, int);

int main(void) {
  assert (raise_to(2.0, 3) == 8.0);
  assert (raise_to(2.0, 2) == 4.0);
}

float raise_to(float base, int power) {
  float ret = 1;
  for (int i=0; i<power; i++) {
    ret *= base;
  }
  return ret;
}
