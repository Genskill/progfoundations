#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void bsort(int [], int);
void print_array(int [], int);


int main(void) {
  int nos[] = {5, 19, 6,8, 12, 2, 12, 15, 10, 1, 7, 9};
  int count = 12;
  bsort(nos, count);
  }

void print_array(int nos[], int count) {
  printf("-------------------------------\n");
  for(int i=0; i<count; i++) {
    printf("%3i : ", nos[i]);
    for (int j=0; j<nos[i]; j++) {
      printf("#");
      }
    printf("\n");
  }
}

void bsort(int nos[], int count) {
  int swapped;
  for (int j=0; j<count; j++) {
    system("clear");
    print_array(nos, count);
    sleep(1);
    swapped = 0;
    for (int i=0; i<count-1-j; i++) {
      if (nos[i] > nos[i+1]) {
        /* Swap */
        swapped = 1;
        int t = nos[i+1];
        nos[i+1] = nos[i];
        nos[i] = t;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}


