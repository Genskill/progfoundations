#include <stdio.h>
#include <math.h>
#include <cs50.h>

void convert(int);
float raise_to(float, int);

int main(void) {
  /* int days = get_int("No. of days "); */
  /* convert(days); */
  printf("%f\n", raise_to(2.0, 3));
}
  


void convert(int days) {
  int yrs, months;

  yrs  = round ((float)days / 365);
  printf("%i years\n", (int)yrs);
  days = days%365;

  months = round ((float)days / 30);
  printf("%i months\n", (int)months);
  days = days%30;

  printf("%i days\n", days);
    
}  


float raise_to(float x, int y) {
  float ret =1;
  for (int i=0; i<y; i++) {
    ret *= x;
  }
  return ret;
}
