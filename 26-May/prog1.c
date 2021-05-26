// prog1.c 
// switch case demo

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int age;
  string name;
  
  name = get_string("Enter your name ");
  age = get_int("Enter your age ");

  switch(age) {
    case 10: {
      printf("Okay. You're in the junior calss!\n");
      break;
      }
    case 12:
      printf("Okay. You're in the middle calss!\n");
      break;
    case 13:
      printf("Okay. You're in the senior calss!\n");
      break;
    case 15:
      printf("Okay. You're almost out!\n");
      break;
    default:
      printf("You shouldn't be here!\n");
    }
  

  printf("Hi %s. I see you are %i years old\n", name, age);
}
