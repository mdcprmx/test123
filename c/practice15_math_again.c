#include <stdio.h>
#include <math.h>

// programm used to calculate square of a triangle, 
// using three sides.
//
// 

int main() {

    // Section 1 - declaration

    double a, b, c, p, res;
    scanf("%lf %lf %lf", &a, &b, &c);

    // Section 2 - body

    p = a + b + c;
    p = p / 2;

    res = sqrt(p * (p - a) * (p - b) * (p - c));

    // Section 3 - printf

    printf("\nResult:%.2lf\n", res);

    return 0;

}