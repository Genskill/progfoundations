#include <stdio.h>
#include <cs50.h>


int main(void) {
  char x[] = {'D', 'i', 'o'};
  
  printf("Address of x is %p\n", x);
  printf("%p\n%p\n%p\n", &x[0], &x[1], &x[2]);

  printf("%p\n%p\n%p\n", (x+0), (x+1), (x+2));

  printf("%p\n%p\n%p\n", (0+x), (1+x), (2+x));
  /* printf("%c\n%c\n%c\n", 0[x], 1[x], 2[x]); */

  char *s = "Noufal";
  printf("%c%c%c\n", *(s+0), *(s+1), *(s+2));
  printf("%s\n", s);

  char *q = get_string("Enter something"); /* char * is cs50 string */
  
  }

