#include <stdio.h>       // adds STanDart Input/Output.
#include <stdbool.h>     // adds booleans. (u know, the TRUE and FALSE type)

int main (){
    
    // %c = character
    // %s = string (of characters) (words)
    // %f = float (0.1)
    // %lf = double (0.1)
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    // %

    float kolbasa = 243.55;
    float doshirak = 62.00;
    float tushonka = 53.99;

    // Print section 1:
    // not redacted version
    printf("\nPyatorochka shop:\n");
    printf("Rolled meat costs %f per kg\n", kolbasa);
    printf("Asian pasta costs %f per piece\n", doshirak);
    printf("Canned cow meat costs %f per piece\n", tushonka);
    printf("\n");

    // Print section 2:
    // redacted and randomly aligned version

    printf("\nSupar Dupar Cool Shop:\n");
    printf("Rolled meat costs $%40.2f per kg\n",kolbasa);             // %40.2 <- number after % refers to allocated space
    printf("Asian pasta costs $%15.2f per piece\n", doshirak);
    printf("Canned cow meat costs $%-20.2f per piece\n", tushonka);    // minus gives it LEFT alignment
    printf("\n");

    // Print section 3:
    // perfectly aligned version

    printf("\n --- Elite iFive shop ---\n");
    printf("-> Rolled meat - %12.1f $ for 1kg\n",kolbasa);             
    printf("-> Asian pasta - %11.1f $ for 1pc\n", doshirak);
    printf("-> Canned cow meat - %7.1f $ for 1pc\n", tushonka);  
    printf("\n");

    return 0;
}
    