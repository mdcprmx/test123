#include <stdio.h>
#include <stdlib.h>   // needed for rand
#include <time.h>     // needed for time in srand

int main() {

    // Section 0 - random seed

    // srand(9);          // manual seed input for random numbers. just like in blender bruh

    srand (time(NULL));   // random seed generation based on TIME from NULL point. (e.g from 1970)
    
    // Section 1 - Random with no restrictions
    
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("\n");

    // Section 2 - Restricted random (from above)

    printf("%d\n", rand()%100); // basically it means "less than 100"
    printf("%d\n", rand()%100);
    printf("%d\n", rand()%100);
    printf("\n");

    // Section 3 - Restricted random (from below and above, WRONG way of doing it)

    printf("%d\n", 50 + rand()%100); // generating numbers higher than 50, but lower than 100
    printf("%d\n", 50 + rand()%100); // but in fact it generates numbers between [50 and 150]
    printf("%d\n", 50 + rand()%100); // so this is WRONG way of doing it.
    printf("\n");

    // Section 4 - Restricted random (from above and below)
    // correct formula: 
    //     A + rand() % (B - A + 1)

    printf("%d\n", 50 + rand() % (95 - 50 + 1));
    printf("%d\n", 50 + rand() % (95 - 50 + 1));
    printf("%d\n", 50 + rand() % (95 - 50 + 1));
    printf("%d\n", 50 + rand() % (95 - 50 + 1));
    printf("%d\n", 50 + rand() % (95 - 50 + 1));

    return 0;
}