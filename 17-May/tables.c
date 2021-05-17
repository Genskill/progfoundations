// tables.c

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int a = get_int("Tables of which number? ");
  int b = get_int("Upto? ");

  for (int i=1; i<=b; i++) {
    printf("%2i x %2i = %2i\n", a, i, a*i);
// %i will be substituted by a
// x will be printed literally
// %2i will be substituted by i but with a fixed field width
// = will be printed literally
// %2i will be substituted by a*i but with a fixed field width
// \n will print a new line

    
  }
}
