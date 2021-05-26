// prog0.c 
// Understanding if statements

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int age;
  string name;
  
  name = get_string("Enter your name ");
  age = get_int("Enter your age ");
  
    


  if (age < 18) {
    printf("Are you sure you're old enough to be here?\n");
  } else if (age < 30) {
    printf("I see you're in your prime!\n");
  } else if (age < 50) {
    printf("Not retired yet I see.\n");
  } else {
    printf("You should be resting!\n");
  }

  printf("Hi %s. I see you are %i years old\n", name, age);
}
