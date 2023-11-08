#include <stdio.h>
#include <string.h>

// Lesson is from here:
// https://www.youtube.com/watch?v=shLeCvDQYp4 

// we can calculate the number of elements in array.
// using "sizeof" operator


int main()
{

// 0 - declaration
double bank_account[] = {471.2, 133.6, 6200.0, 55.1, 93912.1, 552.3,};
// bank_account[0] = 471.2;    // debit card
// bank_account[1] = 133.6;    // credit card
// bank_account[2] = 6200.0;   // savings account

// 1 - main body
printf("\n");
printf("%ld bytes\n", sizeof(bank_account));
printf("\n");
// "sizeof" calculates total size of variable with all elements included.
//  each element is 8 bytes, in "double" data type


for(int i = 0; i < sizeof(bank_account)/sizeof(bank_account[1]); i++)
{
    printf("RUB %.2lf\n", bank_account[i]);
}

// soo this "for loop" counts the number of elements in array, real time, and then
// then displays them as printf.


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}