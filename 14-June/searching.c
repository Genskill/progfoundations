#include <stdio.h>

int lsearch(int [], int, int);
void bsort(int nos[], int count);
int bsearch(int nos[], int start, int end, int key);

int linear_count = 0;
int binary_count = 0;


int main(void) {
  int nos[] = {197, 279, 386, 202, 326, 241, 428, 354, 410, 317, 87, 380, 394, 60, 81, 499, 175, 26, 498, 346, 332, 363, 389, 361, 46, 199, 387, 11, 140, 62, 86, 227, 73, 190, 252, 378, 3, 310, 412, 301, 9, 297, 84, 433, 37, 461, 493, 237, 462, 427, 70, 308, 452, 143, 42, 339, 449, 245, 283, 184, 136, 69, 219, 287, 123, 360, 474, 215, 201, 444, 109, 74, 77, 145, 334, 467, 278, 405, 415, 331, 273, 56, 8, 440, 24, 99, 196, 496};
  int count = 88;
  bsort(nos, count);

  int pos = lsearch(nos, count, 308);
  printf("Position : %i, Value is %i\n", pos, nos[pos]);

  pos = bsearch(nos, 0, count, 308);
  printf("Position : %i, Value is %i\n", pos, nos[pos]);

  printf("Linear : %i. Binary is %i\n", linear_count, binary_count);
}

int lsearch(int nos[], int count, int key) {
  for (int i=0; i<count; i++) {
    linear_count++;
    if (nos[i] == key) {
      return i;
    }
  }
  return -1;
}

int bsearch(int nos[], int start, int end, int key) {
  if (start == end) {
    return -1; /* Not found */
  }
  int mid = start + (int)((end-start)/2);
  int mid_value = nos[mid];
  binary_count++;
  if (mid_value == key) {
    return mid;
  } else if (mid_value < key) { /* Search upper half */
    return bsearch(nos, mid, end, key);
  } else if (mid_value > key) { /* Search lower half */
    return bsearch(nos, start, mid, key);
  }
}

void bsort(int nos[], int count) {
  for (int j=0; j<count; j++) {
    for (int i=0; i<count-1; i++) {
      if (nos[i] > nos[i+1]) {
        /* Swap */
        int t = nos[i+1];
        nos[i+1] = nos[i];
        nos[i] = t;
      }
    }
  }
}
