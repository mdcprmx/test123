#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// programm used to calculate square of a triangle, 
// using two sides and an angle between them.
//
// 

int main(void) {

    // Section 1 - declaration

    double a, b, y, pi, res;
    scanf("%lf %lf %lf", &a, &b, &y);
    pi = 3.141593;

    // Section 2 - body

    y = (y * pi) / 180; // converting from radiana to ugol

    res = a * b;
    res = res * sin(y);
    res = res / 2;

    // Section 3 - printf

    printf("\nResult:%.2lf\n", res);

    return 0;

}