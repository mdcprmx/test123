#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// programm to calculate distance between two points
// formula used: 
//              AB = sqrt( pow((Xb -Xa), 2) + pow((Yb - Ya), 2) )

int main() {

    // Section 1 - declaration

    double xo, yo, xt, yt, resx, resy, res;
    scanf("%lf %lf %lf %lf", &xo, &yo, &xt, &yt);

    // Section 2 - body

    resx = xt - xo;
    resy = yt - yo;
    resx = pow(resx, 2); // vozvedenie v kvadrad
    resy = pow(resy, 2);
    
    res = resx + resy;
    res = sqrt(res);

    // Section 3 - printf

    printf("\nResult:%.2lf\n", res);

    return 0;

}