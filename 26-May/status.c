#include <stdio.h>
#include <cs50.h>

void delay() {
  for (int j=0; j<150; j++) 
    for(int i=0;i< 700000; i++);
  }

void status(string message) {
  printf("%s : ", message);
  for (int i=0; i< 10; i++) {
      printf("#");
      fflush(stdout);
      delay();
  }
  printf(" DONE\n");
}

int main(void) {
  for (int i=0; i<3; i++) {
    printf("Cyborg #024%i\n", i);
    status (" Downloading   ");
    status (" Configuring   ");
    status (" Deploying     ");
  }
  printf("Squad deployed\n");
  }

