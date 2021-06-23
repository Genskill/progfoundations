#include <stdio.h>

int main(void) {
  printf("    int      \n");
  int n = 42;
  int *p = &n; /*p is a pointer to integer */
  printf("n is %i\n", n);
  printf("Address of n is %p\n", &n); /* Address of */
  printf("Value at address of n is %i\n", *&n);
  printf("Value of p is %p\n", p);
  printf("Value at address pointed to by p is %i\n", *p);

  printf("    char      \n");

  char t = 'N';
  char *pc = &t;
  printf("t is %c\n", t);
  printf("Address of t is %p\n", &t); /* Address of */
  printf("Value at address of t is %c\n", *&t);
  printf("Value of pc is %p\n", pc);
  printf("Value at address pointed to by pc is %c\n", *pc);


  printf("--------------------------------------------------\n");
  printf("Size of int %li\n", sizeof(n));
  printf("Size of int * %li\n", sizeof(p));
  printf("Size of char %li\n", sizeof(t));
  printf("Size of char * %li\n", sizeof(pc));

  /* char c is a char */
  /* char *c is a pointer to (char) */
  /* char **c is a pointer to (pointer to (char)) */
  /* char ***c is a pointer to (pointer to (pointer to (char))) */

  printf("--------------------------------------------------\n");  
  char ** ppc = &pc;
  printf("Address of t is %p\n", &t);
  printf("Value of pc is %p\n", pc);
  printf("Address of pc is %p\n", &pc);
  printf("Value of ppc is %p\n", ppc);
  printf("Value at address stored at ppc is %c\n", **ppc);


  int *q1 = (int *)0xDEADBEEF;
  printf("%p\n", q1);
  int a = 10;
  int b = 5;
  q1 = &a; /* Make q1 point to a */
  printf("Value at q1 - %i\n", *q1);
  q1 = &b;
  printf("Value at q1 - %i\n", *q1);
}
