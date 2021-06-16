#include <stdio.h>
#include <cs50.h>

int int_search(int nos[], int len, int key);
int c_search(string s, char l);

int main(void) {
  /* string x = '{'; */
  char x [] = {'D', 'i', 'o'};
  printf("%c(%i) %c(%i) %c(%i) %c(%i)\n", 
         x[0], 
         x[0], 
         x[1], 
         x[1], 
         x[2],
         x[2],
         x[3],
         x[3]);

  printf("%s\n", x);

  int nos[]={2,3,5};
  int t = int_search(nos, 3, 5);
  if (t == -1) {
    printf("Not found");
  } else {
    printf("Found at %i\n", t);
  }


  printf("Searching for 5 : %i\n", int_search(nos, 3, 5));
  printf("Searching for 7 : %i\n", int_search(nos, 3, 7));


  printf("Searching for 'i' : %i\n", c_search(x, 'i'));
  printf("Searching for 'X' : %i\n", c_search(x, 'X'));


  }

int int_search(int nos[], int len, int key) {
  for (int i =0 ; i<len; i++) {
    if (nos[i] == key) {
      return i;
    }
  }
  return -1; /* If not found, will return -1 */
}

int c_search(string s, char l) {
  for (int i=0 ; s[i] != '\0'; i++) {
    if (s[i] == l) {
      return i;
    }
  }
  return -1; /* If not found, will return -1 */
}
