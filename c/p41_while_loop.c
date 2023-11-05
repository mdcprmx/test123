#include <stdio.h>
#include <string.h>

int main()
{

// while loop = it will repeat a section of code, possibly unlimited times.
//              it will repeat a section of code, WHILE set condition remains true.
//              and it is also possible that WHILE loop might not execute at all.

// in this scenario we will write a while loop that keeps asking user for a name input.
// cuz u can skip it with just smashing ENTER.

// 1 - declaration
char user_name[28]; // 28 bytes, lenght of input.

// 2 - main body
printf("\nHello, what is your name?: ");
fgets(user_name, 28, stdin);
user_name[strlen(user_name) - 1] = '\0'; 

// 3 - while loop
// that keeps asking user for input

while(strlen(user_name) == 0)    // it reads as "while string lenght of user_name is null, do:"
{
    printf("\nYou didn't enter your name bruh, please enter it.");
    printf("\nSo, what is your name my man?: ");
    fgets(user_name, 28, stdin);
    user_name[strlen(user_name) - 1] = '\0';
}

// 4 - result
printf("Hello %s\n", user_name);

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}