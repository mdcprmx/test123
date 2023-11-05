#include <stdio.h>

int main()
{

// for loop = it repeats a section of code limited amount of times.
//            


// 1 - main body

// First: variable declaration.
// Second: making a condition, until which third section will execute.
// Third:  increasing/decreasing operation.

//    first         second     third
//      |              |         |  
//      V              V         V  

for(int index = 15; index >= 1; index-=2 )    // btw "-=2"" means "decrease by 2"
{
    printf("\nCountdown: %d", index);
}


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}