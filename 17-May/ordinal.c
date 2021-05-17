// ordinal.c
// Write a program to return first if 1 is entered, second if 2 is entered, third if 3 is intered etc.

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int num = get_int("Enter the number ");
  switch(num) {
    case 1:
      printf("First\n");
      break;
    case 2:
      printf("Second\n");
      break;
    case 3:
      printf("Third\n");
      break;
    case 4:
      printf("Fourth\n");
      break;
    default: 
      printf("Give up man!\n");
  }


  /* if (num == 1) { */
  /*   printf("First\n"); */
  /* } else if (num == 2) { */
  /*   printf("Second\n"); */
  /* } else if (num == 3) { */
  /*   printf("Third\n"); */
  /* } else if (num == 4) { */
  /*   printf("Fourth\n"); */
  /* } else { */
  /*   printf("Give up man!\n"); */
  /* } */
}

