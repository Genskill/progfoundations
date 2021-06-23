#include <stdio.h>
#include <cs50.h>

int main(void) {
  int nos[] = {2,3,4};
  
  printf("nos %p\n", nos);
  printf("nos[0] %i\n", nos[0]);
  printf("nos[0] %p\n", &nos[0]);
  printf("nos[1] %i\n", nos[1]);
  printf("nos[1] %p\n", &nos[1]);
  printf("nos[2] %i\n", nos[2]);
  printf("nos[2] %p\n", &nos[2]);

  if (nos == &nos[0]) {
    printf("Yes! They are the same!\n");
  }

  printf("Dereferencing nos %i\n", *nos);
  printf("nos is %p\n", nos);
  printf("nos+4 is %p\n", nos+4); /*Adds 4*sizeof(pointed type) */
  printf("nos+4 value is %i\n", *(nos+4));

  printf("nos+1 is %p\n", nos+1); 
  printf("nos+1 value is %i\n", *(nos+1));


  printf("nos+2 is %p\n", nos+2); 
  printf("nos+2 value is %i\n", *(nos+2));

  for (int i=0; i<3; i++) {
    if (nos[i] == *(nos+i)) {
      printf("%i is equal!\n", i);
    }
  }


}
