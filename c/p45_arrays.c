#include <stdio.h>
#include <string.h>

// array = a data structure that can store many values of the same data type.
//         when declaring, a number in [] represents total number of elements in the array.
//         if there is no number in [], it just means that there's no hard limit to elements.

int main()
{
//// 0 - declaration

// we can declare arrays in 2 ways.
// first way:
   int prices[] = {3, 8, 15, 1, 6};

// second way:
   int costs[6];
   costs[0] = 51;
   costs[1] = 2;
   costs[2] = 26;
   costs[3] = 8;
   costs[4] = 65;
   costs[5] = 92;
   // btw it always starts with 0, NOT 1. that's how computers work.


// you can also mix them:
    double food_shop_prices[10] = {7.0, 3.5, 9.1};
    // here we have an array with 10 elements, and 3 are declared now
    // so we can declare values in other elements later.
    food_shop_prices[6] = 4.6;
    food_shop_prices[9] = 5.1;


// also, char string is technically an array too
char name[] = "Ivan"; // these are 4 individual elements, in an array.

//// 1 - main body
printf("\nListing an element with 2-nd index in variable \"prices\": %d", prices[2]);
printf("\n");

printf("\nListing an element with 9-nth index in variable \"food_shop_prices\": %.2lf", food_shop_prices[9]);
printf("\n");





// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}