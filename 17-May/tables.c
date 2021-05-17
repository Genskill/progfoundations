// tables.c

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int a = get_int("Tables of which number? ");
  int b = get_int("Upto? ");

  for (int i=1; i<=b; i++) {
    printf("%i x %2i = %2i\n", a, i, a*i);
  }
}
