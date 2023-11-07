#include <stdio.h>
#include <string.h>

int main()
{

//   What is the difference?
// continue = it skips the rest of the code and forces the next iteration of loop
// break  = exits a loop or switch

// we'll make a program that counts from 1 to 15
// and doesn't show 4 (we'll use continue for that)
// and breaks at 13


// 1 - main body
for(int a = 1; a <= 15; a++)
{
    if(a == 4)
    {
        continue;
    }


    else if(a == 13)
    {
        break;
    }


printf("%d\n", a);
}

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}