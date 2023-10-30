#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// return = returns a value back to its' calling function.
//
//          as in end of every "int main" there is "return 0", it returns it
//          to show that there is no errors.
//          because of "return 0", that is why it is "INT main", cause Zero is integer.


int first_ymnozhit_na_dva(int x)
{
    int result = x * x;
    return result;   
    // it returns variable "result" as "x", so it could be named whatever.
}


int second_ymnozhit_na_dva(int x)
{
    return x * x;    
    // btw, these are both valid and essentialy the same statements.
    // but ofc, this way of typing is more efficient and faster.
}


int main() 
{
    // 0 - declaration
    int x = 5;

    // 1 - main body
    x = first_ymnozhit_na_dva(x);
    printf("\nResult first: %d\n", x);

    x = second_ymnozhit_na_dva(x);
    printf("\nResult second: %d\n", x);



    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}