#include <stdio.h>
#include <cs50.h>

/* Create a new name for float - celsius */
typedef float celsius; 
/* Create a new name for float - fahrenheit */
typedef float fahrenheit;

/* This helps documentation and allows us to read the meaning of the function better */

fahrenheit c2f(celsius); /* Converts celsius to Fahrenheit */

int main(void) {
  celsius c = get_float("Enter temperature in celsius ");
  fahrenheit f = c2f(c); 
  printf("Temperature in Fahrenheit is %.2f\n", f);
}

fahrenheit
c2f(celsius c) {
  return ((c*9)/5) + 32;
}
