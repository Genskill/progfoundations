#include <stdio.h>

const float pi = 3.1415;

void example() {
  int x = 10;
  int y = 500;
  printf("x is %i\n", x);
  printf("y is %i\n", y);
  }


void example2() {
  int x = 10;
  printf("outside 1 x is %i \n", x);
    printf("%f\n", pi);
  {
    int x = 50;
    int y = 150;
    printf("inside x is %i \n", x);
    printf("inside y is %i \n", y);
    printf("%f\n", pi);
    x = x + 1;
  }
  printf("outside 2 x is %i \n", x);
      printf("%f\n", pi);
  }


void example3() {
  int pi = 150;
  printf("%i\n", pi);
  {
    char pi = 'a';
    printf("%c\n", pi);
  }
}

void example4() {
  for(int i=0; i<10; i++) {
    int x=10; 
    printf("%i %i", i, x);
  }
  //printf ("i is %i\n", i);
  }

int main(void) {
  int y = 50;
  int pix = 120;
  printf("y is %i\n", y);
  printf("%f\n", pi);
  example4();
  }
