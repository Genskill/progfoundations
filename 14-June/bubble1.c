#include <stdio.h>

void bsort(int [], int);
void print_array(int [], int);


int main(void) {
  int nos[] = {5, 6, 12, 2, 10, 1, 7, 9};
  int count = 8;
  print_array(nos, count);
  bsort(nos, count);
  print_array(nos, count);
  }

void print_array(int nos[], int count) {
  for(int i=0; i<count; i++) {
    printf("%i ", nos[i]);
    }
  printf("\n");
}

void bsort(int nos[], int count) {
  for (int j=0; j<count; j++) {
    for (int i=0; i<count-1; i++) {
      if (nos[i] > nos[i+1]) {
        /* Swap */
        swapped = 1;
        int t = nos[i+1];
        nos[i+1] = nos[i];
        nos[i] = t;
      }
    }
  }
}


