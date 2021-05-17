#include <stdio.h>
#include <cs50.h>

int main(void) {
  int f = get_int("Enter number ");
  int acc = 1;
  for (int i=1; i<=f; i++) {
    acc*=i;
  }
  printf("Factorial : %i\n", acc);
}
