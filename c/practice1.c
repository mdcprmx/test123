#include <stdio.h>

int main(void) {

// escape sequence = character combination consisting of a backslash "\" 
//                   followed by a LETTER or combination of DIGITS.
//
//                   They specify ACTIONS within a line or string of text.
//
//                   \n = newline
//                   \t = tab

    printf("What will happen");
    printf(" if I am not going to use esc seq?");
    printf(" Text will be written in single line!");
    printf("\n");
    printf("\nHello World! \n");
    printf("\n");
    printf("I like\nturtles! \n");
    printf("\n");
    printf("NIGERUNDAYOOO SMOKEY \n");
    printf("Noice \n");
    printf("\tOne\tTwo\tThree\n ");
    printf("\n");
    printf("1 2 3 \n ");
    printf("\t 1 \t 2 \t 3 \n");
    printf("\t 4 \t 5 \t 6 \n");
    printf("\t 7 \t 8 \t 9 \n");

    // This is a single line comment
    // Same, just another single line comment

    /*

    This
    is
    a
    multiline
    comment!

    (anything between these two Forward Slashes and Asteriks considered a comment.)
    
    */ 

   return 0;
}