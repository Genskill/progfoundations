/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. Only one valid answer exists

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include <stdio.h>

typedef struct {
  unsigned int i0;
  unsigned int i1;
} indices;

indices find_indices (int nums[], int len, int target) {
  indices ret = {.i0 = -1, .i1 = -1};
  for (int i=0; i<len; i++) {
    for (int j=0; j<len; j++) {
      if (i == j)
        continue;
      if (nums[i]  + nums[j] == target) {
        ret.i0 = i;
        ret.i1 = j;
        return ret;
      }
    }
  }
  return ret;
}

int main(void) {
  int nos[] = {2, 7, 11, 15};
  int target = 9;
  indices ids = find_indices(nos, 4, target);
  printf("%i(%i) and %i(%i)\n", ids.i0, nos[ids.i0], ids.i1, nos[ids.i1]);
}

