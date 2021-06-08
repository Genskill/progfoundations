#include <stdio.h>
#include <cs50.h>

int main(void) {
  int f;
  int acc =1;
  f = get_int("Enter number ");
  for(int i=1; i<=f; i++) {
    printf("f : %i, acc : %i, i : %i\n", f, acc, i);
    acc *= i;
  }
  printf("%i\n", acc);
}
