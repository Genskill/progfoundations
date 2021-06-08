#include <stdio.h>

int main(void) {
  for (char x = 33; x < 100; x++)  {
    printf("%c : %i\n", x, (int)x);
  }

  char a = 71;
  char b = 117;
  char c = 115;
  

  printf("%c %c %c\n", a, b, c);

  char q = '\n';
  printf("%i\n", q);

  
}


