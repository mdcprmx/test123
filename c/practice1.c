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
    printf("Is this a JoJo Reference?!\n");
    printf("Noice \n");
    printf("\n");
    printf("\tOne\tTwo\tThree\n ");
    printf("1 2 3 \n ");
    printf("\t 1 \t 2 \t 3 \n");
    printf("\t 4 \t 5 \t 6 \n");
    printf("\t 7 \t 8 \t 9 \n");
    printf("\n");
    printf("\"Hello there\" - Obi Wan \n");                       // if u need to add quotes, add \ before " symbol
    printf("\'General Kenobi!\' - mechanical alien dude \n");     // like literally just < \"Quoted text\" >

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