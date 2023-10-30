#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// function = this is a section of code, that is exectuted when it is called (invoked)
//            something like a.. script? a shortcut? for tedious operations that u repeat many times
//            in different scenarios.

// !!! FUNCTIONS CANT SEE INSIDE OTHER FUNCTIONS (in this case, "ask_player" CANT see variables inside "main")
//     so we have to pass them as ARGUMENTS when invoking a function.



// names can be whatever, what is IMPORTANT - is the order, and data type.
void ask_player(char player_name[],int age)
{
    printf("\nHello there %s, you are %d years old right?", player_name, age);
}



int main() 
{
    // 0 - declaration
    char player_name[] = "Michael";
    int age = 25;

    // 1 - main body
    ask_player(player_name, age);   // these are ARGUMENTS, that u pass to function.
                                    // sort of like an Amazon mail package, that u send with adress and name arguments
                                    // u could send it without em, but then it will never reach the receiver.




    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}