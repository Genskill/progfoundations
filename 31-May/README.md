# Practice problems

1. Days into years, months, weeks, and days
2. Power of a number
3. Largest of 3 number is prime or not?
4. Patterns

       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

5. Factorial
6. Hanoi



# Practice 
1. Currency splitter
2. Fahrenheit to Celsius and reverse converter

# Recursive functions

Some functions can be written in a way the the function calls itself
with a smaller value. e.g. `factorial`

    int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n-1);
        }
        
If we call `factorial(4)`, it will expand to `4 * factorial(3)`, then
`factorial(3)` will expand to `3 * factorial(2)` and so on. The list
of calls will look like this

    f(4)
     4 * f(3) 
          3 * f(2)
                2 * f(1)
                      1 * f(0)
                            1

The functions will return in reverse order and we'll get something
like this

    f(4)
     4 * f(3) 
          3 * f(2)
                2 * f(1)
                      1 * f(0)
                            1

This will return from the end like so

     24
      4 * 6
          3 * 2
              2 * 1
                  1 * 1
  
to give you your final answer `24`. 

# Towers of Hanoi

To do the Hanoi problem, 


The towers of hanoi solution is done like so. We want to move n rings
from tower A to C (tower B is a reserve tower we can call the "other").

- If n is 1 (smallest ring)
  - we would just move it from A to C
- Otherwise,
  - We would move all rings smaller than n (n-1) from A to the other
    tower (B) to clear the way for ring n
  - Move ring n from A to C (since it's clear now)
  - Move all the rings we moved to B to C
  
This logic is coded in the program `hanoi.c`  

[This](https://www.youtube.com/watch?v=rf6uf3jNjbo) is a good
explanation of how it works.
