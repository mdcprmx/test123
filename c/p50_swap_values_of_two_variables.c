#include <stdio.h>
#include <string.h>

// it is easy to metaphore this process as two glasses with luqiuids.
// you can't just pour one into another, it will overflow.
// so you need a third glass, to temporary hold said liquid (value, in our case)

// use STRCPY to switch char strings
// it's usage is basically the same as during initialization, for example:
//
// char e = temporarrrry;
// strcpy (e, temporarrry);
//
// THOSE ARE THE SAME OPERATIONS!
// but instead of "=" use ",", and put it in round brackets.
// oh and u have to use STRCPY with char strings.

int main()
{

// 0 - declaration
char a = 'A';
char b = 'B';
char temporary;

// 1 - main body
printf("Default:\n%c\n", a);
printf("%c\n", b);

temporary = a;
a = b;
b = temporary;

printf("\nSwapped:\n%c\n", a);
printf("%c\n\n", b);

// 2 - with strings
char cup[22] = "Tea";
char bottle[22] = "Cola";
char temp_cup[22]; // 22 is maximum string lenght.
// and to avoid bugs, it's best to set this value. to whatever number pleases you.
// if u leave them both empty [], it may get bugged.

printf("Default STRING:\n%s\n", cup);
printf("%s\n", bottle);

strcpy(temp_cup, cup);
strcpy(cup, bottle);
strcpy(bottle, temp_cup);

printf("\nSwapped STRING:\n%s\n", cup);
printf("%s\n", bottle);

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}