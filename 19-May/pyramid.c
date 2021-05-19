// pyramid.c

#include <stdio.h>
#include <cs50.h>

void draw_pyramid(int, char); // declaration

int main(void) {
  // Asking for the height
  int height = get_int("Enter height ");
  draw_pyramid(height, '#');
  draw_pyramid(height, '@');

}

void draw_pyramid(int h, char pattern) { // definition
  // Printing the pyramid
  for (int i=1; i<=h; i++) {
    for (int j=0; j<i; j++) 
      printf("%c", pattern);
    printf("\n");
  }
}




