#include <stdio.h>       // adds STanDart Input/Output.
#include <stdbool.h>     // adds booleans. (u know, the TRUE and FALSE type)

int main (){
    
    // Data types:                       // Description:                   Refer to it using:

    char a = 'Y';                        // single character               %c
    char b[] = "LongAssName";            // array of characters, words.    %s

    float c = 3.1234567;                 // 4 bytes (32bits) 6-7 digits    %f
    double d = 3.1234567890123;          // 8 bytes (64bits) 15-16 digits  %lf
        //
        // < double > is prefered over float usually,
        // cuz it's more precise.

    bool e = true;                       // 1 byte (true or false)         %d
    bool alive = true;
    bool skill_is_ready = false;
    bool waypoint_discovered = true;
    

    // ------------------ Print section ------------------
    // --- Section 1: float and double

    // btw, < printf("%0.1f") > or < printf("%0.15f") refers to amount of decimals after dot.
    // example:
    printf("\nThis line will show 2 digits after dot : %0.2lf",d);
    printf("\n");
    // cause of < %0.2 > line.
    // example 2:
    printf("But this line will show 12 digits after dot : %0.12lf",d);
    printf("\n\n");
    // cause of < %0.12 > line. Data type may change tho, be it [float > %f] or [double > %lf].

    printf("Float and Double data types:\n");
    printf("%0.7f",c);   // float
    printf("\n");
    printf("%0.15lf",d);  // double

    // --- Section 2: boolean

    printf("\n\nBoolean will show:");
    printf("\n");
    printf("True as: %d, %d, %d.",e,alive,waypoint_discovered);
    printf("\n");
    printf("False as: %d.",skill_is_ready);
    printf("\n");

    // --- Section 3: char

    printf("\nChar will show:");
    printf("\n");
    printf("Single char as this: %c \n",a); // < char > uses %c
    printf("String as this: %s\n",b);





}