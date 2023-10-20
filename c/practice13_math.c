#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// programm used to calculate distance between two points
// formula used: 
//              AB = sqrt( pow((Xb -Xa), 2) + pow((Yb - Ya), 2) )

int main() {

    // Section 1 - declaration

    double xo, yo, xt, yt;
    double resx, resy, res;
    // "xo" - is short for "x one". 
    // "xt" - is short for "x two" 
    // "yo" and "yt" is the same.
    scanf("%lf %lf %lf %lf", &xo, &yo, &xt, &yt);

    // Section 2 - body

    resx = xt - xo;      // vnutri skobok
    resy = yt - yo;
    resx = pow(resx, 2); // vozvedenie v kvadrat
    resy = pow(resy, 2);
    
    res = resx + resy;   // vnutri kornia
    res = sqrt(res);

    // Section 3 - printf

    printf("\nResult:%.2lf\n", res);

    return 0;

}