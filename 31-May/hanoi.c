#include <stdio.h>
void print_spc(int n) {
  for (int i=0; i<n; i++) 
    printf("..");
}


void hanoi(int num, int from, int to, int other) {
  print_spc(num);
  printf("I have been requested to move ring %i from %i to %i\n", num, from, to);
  if (num == 1) {
    /* print_spc(num); */
    /* printf("This is the smallest ring, so I can just do it\n"); */
    /* print_spc(num); */
    printf("Move %i from %i to %i\n", num, from, to);
  } else {
    /* print_spc(num); */
    /* printf("This is harder.\n"); */
    /* print_spc(num); */
    /* printf("First I  move %i from %i to %i\n", num-1, from, to); */
    hanoi(num-1, from, other, to);
    /* print_spc(num); */
    printf("Move %i from %i to %i\n", num, from, to);
    /* print_spc(num); */
    /* printf("Finally I move %i from %i to %i\n", num-1, other, to); */
    hanoi(num-1, other, to, from);
    }
  }

/* To iterate is human, to recurse divine. */

int main(void) {
  hanoi(3, 1, 3, 2);
}
