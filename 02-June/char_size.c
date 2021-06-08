#include <stdio.h>

int main(void) {
  // -128 0 127
  char a = 0;
  unsigned char b = 0;
  
  for (int i=0; i<300; i++) {
    printf("%i %i\n",(int)a, (int)b);
    a++;
    b++;
  }
}
