#include <stdio.h>
#include <cs50.h>

int factorial1(int);
int factorial2(int);

int main(void) {
  while (1) {
    int v = get_int("Enter number ");
    printf("1 %i\n", factorial1(v));
    printf("2 %i\n", factorial2(v));
  }
}

int factorial1(int x) {
  int ret = 1;
  for (int i=1; i<=x; i++) {
    ret =  ret *i;
  }
  return ret;
}

5
int factorial2(int x) {
  if (x == 0) {
    return 1;
  } else {
    return x * factorial2(x-1);
  }
}

120

   
      
           
                
                     
