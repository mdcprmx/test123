#include <stdio.h>
#include <math.h>    // needed for math functionale.

int main() {
    
    // Section 1 - Declarization
    
    double z, x, c, v, b, n, m;
    int a, s, d;

    // Section 2 - Body | Math

        // Section 2.1 - Rounders

        a = round(420.69);  // Rounds a number, be it in upper or lower side. Okruglyaet blyat
        printf("\nRounded number: %d\n", a);

        s = ceil(23.15);    // (ceiling) Rounds a number strictly UP, always.
        printf("\nRounded ceiling numba: %d\n", s);

        d = floor(77.98);   // (floor) Always rounds a number DOWN.
        printf("\nFloor rounding: %d\n", d);

    
        // Section 2.2 - The rest of em.

        z = sqrt(52);       // SQare RooT function, you don't have to do it manually in class! yay!
        printf("\nSquare root of 52 is: %lf\n", z );

        x = pow(6, 10);     // "6 to the POWER of 10 is". But what is POWER?... dunno man, I sucked at math in school.
        printf("\nSix to power of 10 is: %lf\n", x);
        printf("Formatted six to power of 10 is: %.1lf \n", x);

        c = fabs(-56);      // dunno man, some FAB feature. mathemagic!
        printf("\nFabs: %.2lf\n", c);

        v = log(5);
        printf("\nLogorythm of 5: %lf\n", v);

        b = sin(26);
        printf("\nSin: %lf\n", b);

        n = cos(26);
        printf("\nCos: %lf\n", n);

        m = tan(26);
        printf("\nTan: %lf\n", m); 
        
        // mathemagics! I don't understand any of it.


    return 0;
}