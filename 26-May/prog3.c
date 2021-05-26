// prog3.c 
// Functions

#include <stdio.h>
#include <cs50.h>

void print_birthday(int, string); //declarations/prototype
int get_positive_int(string); 

int main(void) {
  string name = get_string("Enter your name ");
  int age;
  age = get_positive_int("Enter your age ");
  print_birthday(age, name);
}

int get_positive_int(string prompt) {
  int ret;
  do {
    ret = get_int("Enter your age ");
  } while (ret <= 0);

  /* ret = get_int("Enter your age "); */
  /* while (ret <= 0)  { */
  /*   ret = get_int("Enter your age "); */
  /* } */
  return ret;
}

void print_birthday(int x, string name) {
  // definitions (implementations)
  for (int i=x; i>=1; i-=1) {
    for (int j=0; j<i; j++) {
      printf(" ");
    }
    printf ("%i - Happy birthday dear %s!\n", i, name);
  }
}



  



