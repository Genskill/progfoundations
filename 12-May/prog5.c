// prog5.c
#include <stdio.h>
#include <cs50.h>

int main(void) {
  string name = get_string("Enter your name ");
  int age = get_int("Enter your age ");
  
  if (age <10);
  printf("Hi there %s. You are %i years old\n", name, age);
  
  
  /*
  if (age < 10) {
    printf("Get out of here!\n");
  } else if (age < 18) {
    printf("You're not even old enough to vote!\n");
    printf("Please come back when you're older\n");
  } else { 
    printf("Hi %s. I see you are %i years old\n", name, age);
  }
  */
}
