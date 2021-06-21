#include <stdio.h>
#include <string.h>
#include <cs50.h>

/* This function will take the following inputs - 
 1. an array of strings as input - These are names of people
 2. an array of int as input - These are the ages of the people
 3. an integer denoting the number of elements in the arrays above
 4. A name to search for (search name)
 
 What the function does

 If the search name is there in the array of names, return the age corresponding to that name. Otherwise, return -1.

 find({"john", "doe"}, {30, 40}, 2, "john"); - This will return 30 (since I'm searching for john the corresponding age is 30
 
 
 find({"john", "doe"}, {30, 40}, 2, "james"); - This will return -1 since james is not there in the list of names provided 
*/


int find(string[], int[], int, string);


int main(int argc, string argv[]) {
  if (argc != 2) {
    printf("Program to print age of person with given name\n");
    printf("Usage : %s name\n", argv[0]);
    return 1;
  }
  
  string names[] = {"John", "Ares", "Winston"};
  int ages[] = {50, 30, 65};

  int age = find(names, ages, 3, argv[1]);
  if (age == -1) {
    printf("%s not found \n", argv[1]);
  } else {
    printf("%s is %i years old\n", argv[1], age);
  }
}

int find(string names[], int ages[], int count, string name) {
  for(int i=0; i<count; i++) {
    if (strcmp(names[i], name) == 0) { /* We found a match */
      return ages[i];
    }
  }
  return -1; /*The name was not found */
}
