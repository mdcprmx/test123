#include <stdio.h>
#include <math.h>    // needed for math functionale.

// there is a bug with GCC that makes it not see <math.h>
// fix it with adding "-lm" at the end of gcc line
// exapmle:
// cd "/home/mpx/test123/c/" && gcc practice15_math_again.c -o practice15_math_again -lm && "/home/mpx/test123/c/"practice15_math_again
//
// Why is this bug happening? I don't understand. 
// p13_math file works perfectly, and after that - it just bugs out. for whatever reason.

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