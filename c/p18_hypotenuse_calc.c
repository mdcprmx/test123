#include <stdio.h>
#include <math.h>

int main() {

    // 1 - Declaration
    double A, B, C;

    // 2 - User input
    printf("\nEnter side A: \n");
    scanf("%lf", &A);

    printf("\nEnter side B: \n");
    scanf("%lf", &B);

    // 3 - Calculations
    C = sqrt(A * A + B * B);

    // 4 - Result
    printf("\nSide C: %.2lf\n", C);



return 0;
}