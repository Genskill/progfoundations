#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int *read_nos();

int main(void) {
  int *n = read_nos();
  for (int i=0; n[i] != -1; i++) {
    printf("%i\n", n[i]);
    }
  free(n);
}

int *read_nos(){
  int num = get_int("How many numbers?");
  /* int ret[num+1]; */
  int *ret = malloc(sizeof(int) * num+1);
  for (int i=0; i<num; i++) {
    ret[i] = get_int("Enter number ");
  }
  ret[num] = -1;
  return ret;
}
