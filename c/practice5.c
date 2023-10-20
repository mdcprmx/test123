#include <stdio.h>

int main (){

    // what is CONSTANT?
    // constant = fixed value that cannot be altered by programm when it is being executed.

    const float BREAD = 50.03;
    const char WEAPON[] = "Greatsword";

    // BREAD = 90.3;           // hidden as comment to not cause error
    // WEAPON = "frying_pan";  // hidden as comment to not cause error

    // it is also a good practice to name constants with CAPS LOCK, UPPER CASE ONLY.

    // Print section:

    printf("Bread costs %.2f", BREAD);
    printf("\n");
    printf("Equipped weapon = %s", WEAPON);

    return(0);
}