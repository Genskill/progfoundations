/* Read a list of names from the user and print them out.

Uses an array of strings
*/

#include <stdio.h>
#include <stdlib.h>

char **get_names();


int main(void) {
  char **names = NULL; /* Should store an array of char *(string). i.e. Array of strings) */
  names = get_names();
  for (int i=0; names[i] != NULL; i++) {
    printf("%d. %s\n", i+1, names[i]);
  }
  printf("%s\n", names[1]);
  printf("%c\n", names[1][0]);
  /* Try to find the largest string in names */
 /* print out the names here */
}

char **
get_names() {
  char **ret = NULL;
  int n;
  printf("Enter number of names ");
  scanf("%d", &n);
  printf ("We got %d \n", n);
  ret = malloc(sizeof(char *) * n+1); /* Will allocate n char *s for me */;
  for (int i = 0; i<n; i++) {
    ret[i] = malloc(sizeof(char) * 100); /* Assumes that a name can't have more than 100 characters */
    printf("Enter name %d ", i+1);
    scanf("%s",ret[i]) ;
  }
  ret[n]=NULL;
  return ret;
  /* int *p; */
  /* p = malloc(sizeof(int) * 10); // p will be pointer to int. *p will be an int. p[0] will be an int  */

  /* char *p; */
  /* p = malloc(sizeof(char) * 10); // p will be a pointer to char. *p will be char. p[0] will be a char  */
  /* char **p; */
  /* p = malloc(sizeof(char *) * 10);// p will be a pointer to a pointer to char(string). p[0] will be a string. *p will be a string  */

  }
