#include <stdio.h>

int main() {

    // S1 - Declaration
    const double PI = 3.14159;
    double radius, circumference, area;


    // S2 - User input
    printf("\nEnter circle radius pls:\n");
    scanf("%lf", &radius);


    // S3 - Calculations
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // S4 - results
    printf("\nCicrumference: %.2lf\n", circumference);
    printf("\nArea: %.2lf\n", area);
    
return 0;
}