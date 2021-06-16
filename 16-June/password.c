#include <stdio.h>
#include <cs50.h>
#include <string.h>

int get_password();

int main(void) {
  if (get_password()) {
    printf("Authenticated!\n");
  } else {
    printf("Failed!\n");
  }
}

int get_password() {
  string secret = "iamhacker";
  string input;
  input = get_string("Enter password ");

  printf("%i\n", strcmp(secret, input));
  if (strcmp(secret, input) == 0) {
    return 1;
  } else {
    return 0;
  }
}

