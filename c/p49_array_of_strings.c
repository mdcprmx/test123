#include <stdio.h>
#include <string.h>

// it is somewhat easier to create an array of strings.
// cuz char strings are already 2D arrays.
// BUT! there is ONE important difference:
//      you have to use "strcpy" to assign a value.


int main()
{

// 0 - declaration
char food_list[][10] = {"Bread", "Cabbages", "Honey", "Tushonka"};

// 1 - main body
printf("\nBasic list:\n");
for (int a = 0; a < sizeof(food_list)/sizeof(food_list[0]); a++)
{
    printf("%s\n", food_list[a]);
}


// 2 - second body
// food_list[0] = "Meat"; // THIS WONT WORK!
// u have to use "strcpy" instead. (u need string.h for this)
strcpy(food_list[0], "Baguette");
strcpy(food_list[2], "Cheese");

printf("\nModified list:\n");
for (int a = 0; a < sizeof(food_list)/sizeof(food_list[0]); a++)
{
    printf("%s\n", food_list[a]);
}


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}