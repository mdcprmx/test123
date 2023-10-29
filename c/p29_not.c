#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    // logical operators = ! (NOT) operator, it reverses the state of condition.
    //                     inverts TRUE as FALSE, or vice versa.

    // 1 - declaration
    bool in_love = false;

    // 2 - main body
    if (!in_love == false){
    // btw, u can write this statement as 
    // if (in_love == 1){ 
    // or as 
    // if (in_love){ 
    // and the program will read it all the same. There is literally no difference.
        printf("\nUr a happy human being!\n");
    }

    else{
        printf("\nWell, life can be lived happily even without love!\n");
    }

    

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}