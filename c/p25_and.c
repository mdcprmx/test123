#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = && (AND). it checks for two conditions to be true.
    //                     All conditions must be true, if even one condition
    //                     is false then it will consider whole operation false. 

    // 1 - declaration
    bool wife = true;
    bool kids = true;
    bool home = true;
    bool car = true;     
    // u can change any of these bool values to see what happens if even one statement is false
    

    // 2 - main
    if(wife && kids && home && car){        // if wife = true, kids = true, home = true, and car = then
        printf("\nYou're a happy man!\n");  // then IF statement is true.
    }


    else{
        printf("\nBro, ur sad I guess\n");
    }

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}