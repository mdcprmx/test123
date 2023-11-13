#include <stdio.h>
#include <string.h>

// enum = enumerations, a user defined type of named integer identifiers
//        they help in making a program more readable for me, you, us, 
//        or anyone looking thru the CODE.

// we can declare em inside main function, or outside. (so anywhere)
// enums are constants by default.

// they are treated as int. ALWAYS. 
// so u can use 0, 1, 2, 3, etc instead of chars

// or actually, the whole point of enums - is to make code more READABLE!
// u can straight up use any value inside enums!
// like:
// if(today == Sunday)
// YEAH! FORGET STOOPID NUMBERS! (0, 1, 2 etc) U CAN USE WORDS! (when using enums) 
// so let's go and make this C world beautiful!

// it is optional to set numbers to enums. (by default it starts with 0, but for humans it is easier if things start from 1)
enum Month{Jan = 1, Feb = 2, March = 3, April = 4, May = 5, June = 6, July = 7, Aug = 8, Sept = 9, Oct = 10, Nov = 11, Dec = 12};

// or u can set numbers to remember enums better.
enum Numbers{Lucky = 7, Funny = 69, Leet = 1337};

// but as I have said before, default order starts from 0
enum Day{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main()
{
// 0 - declaration
enum Month today = Dec;

// 1 - main body
printf("\n%d", today);  // this will print month int number, bruh. not rly USER friendly. 

if(today == Dec || today == Jan || today == Feb)
{
    printf("\nYay! It is winter today!");
}
else if(today == June || today == July || today == Aug)
{
    printf("\nYeaaahhh! It's sunny and shiny today! Summer time!");
}


else
{
    printf("\nAutumn or Spring is today, bruh. Mud time!");
}


// 1 - main body, printf for Numbers and Days
printf("\n\nNumbers: %d, %d, %d", Lucky, Leet, Funny);
printf("\n\nDays: %d, %d, %d", Sun, Mon, Fri);
// but yeah, enums are mostly used for PROGRAMMERS, to better understand code.
// cuz these printf statements just print numbers.



printf("\n");
// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}