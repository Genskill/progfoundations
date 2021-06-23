#include <stdio.h>

int main(void) {
  int a = 42;
  int *p; /* = &a; */
  p = &a;
  printf("%p\n", p);

  *p = &a; /* Error */


  int x[100]; /* Size needed to hold this array is 100*sizeof(int) = 400 */
  /* The variable x contains a single address. To hold an address, we will use 8 bytes */

  const int *pq = &a;
  pq = x;
  printf ("%i\n", *pq);

}
