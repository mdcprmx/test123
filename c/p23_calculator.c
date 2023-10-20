#include <stdio.h>

int main() {

    // 1 - declaration
    char operation;
    double n1, n2, res;

    // 2 - user input
    printf("\nPlease, enter your' desired operator ( +  -  *  / ): \n");
    scanf("%c", &operation);    // input 1

    printf("\nEnter first number: ");
    scanf("%lf", &n1);          // input 2

    printf("Enter second number: ");
    scanf("%lf", &n2);          // input 3

    ////////////////////////
    ////////////////////////
    ////////////////////////

    // 3 - main body

    switch(operation){

        case '+':
        res = n1 + n2;
        printf("\nAddition result: %.2lf\n", res);
        break;

        case '-':
        res = n1 + n2;
        printf("\nSubtraction result: %.2lf\n", res);
        break;

        case '*':
        res = n1 * n2;
        printf("\nMultiplication result: %.2lf\n", res);
        break;

        case '/':
        res = n1 / n2;
        printf("\nDivision result: %.2lf\n", res);
        break;
        

    // if user input is wrong, default is executed.    
    default:
    printf("\n%c operation is not supported by this programm.\n", operation);
    break;
    }
    
    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}