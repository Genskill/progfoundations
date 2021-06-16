#include <stdio.h>
#include <cs50.h>
#include <string.h>

void get_password();

int main(void) {
  get_password();
  printf("Authenticated!\n");
}

void get_password() {
  string secret = "iamhacker";
  string input;
  input = get_string("Enter password ");

  if (strcmp(secret, input) == 0) {
    printf("They are equal!\n");
  } else {
    printf("They are not equal!\n");
  }
}
