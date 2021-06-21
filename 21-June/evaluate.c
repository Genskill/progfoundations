#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

/* push
   pop
*/
typedef struct {
  int items[100];
  int index;
} Stack;

Stack S;

void init() {
  for (int i=0; i<100; i++) {
    S.items[i] = -1;
  }
  S.index = -1;
}

void display() {
  printf("Stack : ");
  if (S.index == -1) {
    printf("Empty\n");
  } else {
    for (int i=0; i<=S.index; i++) {
      printf("%i | ", S.items[i]);
    }
    printf("\n");
  }
}

void push(int item) {
  S.index++;
  S.items[S.index] = item;
}

int pop() {
  int ret;
  if (S.index == -1) {
    return -1;
  }
  ret =S.items[S.index];
  S.index--;
  return ret;
}

int main(int argc, string argv[]) {
  if (argc != 2) {
    printf("Program to Evaluate postfix expression\n");
    printf("Usage : %s expression\n", argv[0]);
    return 1;
  }
  /* '4' -> 4 */
  for(int i=0; i<strlen(argv[1]); i++) {
    if (isdigit(argv[1][i])) {
      push(argv[1][i] - '0');
    } else {
      int a = pop();
      int b = pop();
      switch (argv[1][i]) {
        case '+':
          push(a+b);          
          break;
        case '*':
          push(a*b);          
          break;
      }
    }
  }
  int result = pop();
  printf("Result is %i\n", result);
}


