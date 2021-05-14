// prog2.c
// Reading input from the user

#include <stdio.h>
#include <cs50.h>

int main(void) {
    // Declarations
    string name;
    int age;
    
    // Reading input from user
    name = get_string("Enter your name ");
    age = get_int("Enter your age ");
    
    // Print output
    printf("Hi %s. I see you are %i years old\n", name, age);
}
