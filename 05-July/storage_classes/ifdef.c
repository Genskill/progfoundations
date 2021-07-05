#include <stdio.h>


#ifdef M1
void foo() { printf("Hello!\n"); }
#else
void foo() { printf("Goodbye!\n"); }
#endif

/* 

Will define M1 so that the second part will run 

gcc -D M1 ifdef.c -o ifdef  

M1 is not defined so first part will run 
gcc ifdef.c -o ifdef  

*/



int main(void) {
  foo();
}
