#include <stdio.h>
#include <cs50.h>


float compute_average(int len, int marks[])  {
  float total = 0;
  for (int i=0; i<len; i++) {
    total += marks[i];
  }
  return total/len;
}



int main(void) {
  int N = get_int("Number of subjects ");

  string names[N];
  int marks[N];

  for (int i=0; i<N; i++) {
    names[i] = get_string("Enter subject %i ", i+1);
    marks[i] = get_int("Enter marks for  %s ", names[i]);
  }

  float average = compute_average(N, marks);
  
  for (int i=0; i<N; i++) {
    printf("%s : %i ", names[i], marks[i]);
  }
  printf("Average is %f\n", average);
}


