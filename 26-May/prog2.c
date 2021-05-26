// prog2.c 
// Looping demo

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int age;
  string name;
  
  name = get_string("Enter your name ");
  age = get_int("Enter your age ");

  for (int i=age; i>=1; i-=1) {
    for (int j=0; j<i; j++) {
      printf(" ");
    }
    printf ("%i - Happy birthday!\n", i);
  }
  


  printf("Hi %s. I see you are %i years old\n", name, age);
}
