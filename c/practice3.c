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

    // for numberical CHAR use %d.
    // u can also use ASCII to show chars as numbers, but bruh, for real?
    
    char v = -97;                        // 1 byte (from -128 to +127)     %d
    unsigned char uV = 249;              // 1 byte (from 0 to +255)        %d 
    // btw < signed char > and < char > are the 
    // same. These are exactly the same expressions.



    // Data types:                       // Description:                   Refer to it using:

    short int m = 32500;                 // 2 bytes (-32,768 to +32,767)   %d
    unsigned short int k = 65500;        // 2 bytes (0 to +65,535)         %d

    // also, ppl usually just name them < short >, not < short int > 
    // so yeah. Kind-a stupid but whatever

    short peepee = 433;                  // same as < short int >          %d
    unsigned short pe = 50200;           // same as < unsigned short int > %d

    int jo = 2147483641;                 // 4 bytes (-2 bln to +2 bln)     %d
    unsigned int ko = 4294957223;        // 4 bytes (0 to 4 billions)      %u   <-- not D, it uses U.

    // these < long long int > are rarely used, but u should know about them in case u need em.
    long long int uw = 9292389238239;    // 8 bytes (HUGE LARGE NUMBERS)   %lld
    unsigned long long int uwu = 1823923801937918273; // (0 to 18 qntlion) %llu



    

    //
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
    printf("True as: %d, %d, %d.", e, alive, waypoint_discovered);
    printf("\n");
    printf("False as: %d.",skill_is_ready);
    printf("\n");

    // --- Section 3: char

    printf("\nChar will show:");
    printf("\n");
    printf("Single char as this: %c \n",a); // < char > uses %c
    printf("String of chars as this: %s\n",b);

    // - char numerical

    printf("\nNumerical char, range from -127 to +128: %d", v);
    printf("\nNumerial unsigned char, range from 0 to 255: %d", uV);

    // --- Section 4: short int and unsigned 
    
    printf("\n\nTHIS is short int : %d", m);
    printf("\nAnd this - is unsigned short int : %d", k);
    printf("\nTHis is short int too : %d", peepee);
    printf("\nUnsigned short #2 : %d", pe);

    // --- Section 5: int

    printf("\n\nSoo this is integer: %d",jo);
    printf("\nANd this is unsigned integer: %u",ko); // remember that unsigned int uses %u, not the ususal %d.

    // --- Section 6: long long int

    printf("\n\nle Long LONG integer: %lld", uw);            // %lld stands for long long d
    printf("\nze unsigned Long LONG integer: %llu", uwu);    // %llu stands for long long u




    return 0;

}