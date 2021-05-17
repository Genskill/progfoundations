// error_for.c

#include <stdio.h>

int main(void) {
  for (int i=0,j=0; i<10; i++,j+=2)
    printf("%d %d\n", i,j);
}

/* for(initialiser; condition; incrementer) { */
/*   body */
/*   } */
