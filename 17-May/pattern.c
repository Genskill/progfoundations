// pattern.c
/* # */
/* ## */
/* ### */
/* #### */
/* ##### */
/* ###### */
/* ####### */

#include <stdio.h>
#include <cs50.h>

int main(void) {
  int height=get_int("Enter height ");
  
  for (int row=1; row <=height; row++) {
    for (int col=1; col<=row; col++) {
      printf("#");
    }
    printf("\n");
  }
}

