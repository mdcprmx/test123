#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// ternary operator = shortcut to if/else statement, when assigning or returning a value
//
// formula for ternary operator:
// "(condition) ? value if true : value if false"
// 
// real working example:
// return (x > y) ? x : y;
// 
// this code checks if X or Y is bigger, and returns it to whatever called it. (usually to main)
// 

int findMax(int a, int b)     // these variables should be named "first" and "second", but 
{                             // it is more readable as "a" and "b", and function doesnt care what they are named.
    return (a > b) ? a : b;
}

int main() 
{
    // 0 - declaration
    int first;
    int second;
    int maximum;
    
    // 1 - main body
    printf("\nPls, type two numbers, to compare which is bigger.\n");
    scanf(" %d \n %d", &first, &second); // user input 
    
    maximum = findMax(first, second);
    printf("\n%d is bigger!\n", maximum);

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}