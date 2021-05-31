#include <assert.h>
#include <stdio.h>
#include <cs50.h>
#include <math.h>

void split(int);

int main(void) {
  int days = get_int("Enter number of days ");
  split(days);
}


void split(int days) {
  int years;
  int months;

  years = (int)(days/365.0);
  printf("Years : %i\n", years);
  days = days%365;
  assert (days < 365);
  
  months = (int)((float)days/30);
  printf("Months : %i\n", months);
  days = days%30;

  assert (days < 30);


  printf("Days   : %i\n", days);


  }


