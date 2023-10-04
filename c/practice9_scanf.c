#include <stdio.h>
#include <string.h>

int main (){
    
    // Section 1 - Declaration:
    int a, b, rez;

    // Section 2 - Main Function:
    printf("First number input:\n");
    scanf("%d", &a);
    printf("Second number input:\n");
    scanf("%d", &b);
    rez = a + b;

    // Section 3 - Result Print:
    printf("%d + %d = %d\n", a, b, rez);

    return(0);
}