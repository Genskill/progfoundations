// prog4.c
// Computations
#include <stdio.h>


int main(void) {
  int a = 4;
  int b = 5;
  
  printf("Sum : %i\n", a + b);
  printf("Diff : %i\n", a - b);
  printf("Prod : %i\n", a * b);  
  printf("Div : %f\n", (float)a / (float)b);
  
  printf("a is %i\n", a);
  a = 10;
  printf("a is %i\n", a);
  a = a + 1;
  printf("a is %i\n", a);  
  a +=1;
  printf("a is %i\n", a);  
  a++;
  printf("a is %i\n", a);  
  
}
