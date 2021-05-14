// prog3.c
// computations
// Casting

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int a = get_int("Enter first number ");
  int b = get_int("Enter second number ");
  
  int total = a + b;
  float average = ((float)a + (float)b)/2;
  printf("Sum is %i\nAverage is %.2f %i\n", total, average, (int)average);
  
  
  }
