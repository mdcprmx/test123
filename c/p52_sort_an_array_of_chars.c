#include <stdio.h>
#include <string.h>

// in this programm we will SORT an array from random chaos to ascending order

// so what's the difference between INT and CHAR?
// u just change it to char lmao
// LITERALLY JUST CHANGE ANY "INT" to "CHAR" inside void functions, where u pass data
// also change it inside printf statement, from %d to %c
// but that's pretty basic stuff u know

// and it will order it in Alphabetic order.

void sorte(char[], int); // function prototype, functions itself is at bottom.
void printOurArray(char[], int); // another prototype.

int main()
{
// 0 - declaration
// int OurArray[] = {2, 8, 6, 3, 1, 4, 9, 7, 5};
char OurArray[] = {'B', 'J', 'E', 'Q', 'A', 'P'};
int size_OurArray = sizeof(OurArray)/sizeof(OurArray[3]); // why 3? cuz why not! it can be 0 if u want.

sorte(OurArray, size_OurArray); // btw, u can mute this line to see it unsorted.
printOurArray(OurArray, size_OurArray);

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}

// so what is this?
// loop within a loop, that... erm..
// does MATHEMAGICS!
// just google "Bro Code sort an array" to find whatever that code is.
// cuz i have written it, but I hardly understand it.

void sorte(char OurArray[], int size_OurArray)
{
    for(int a = 0; a < size_OurArray -1; a++)
    {
        for(int b = 0; b < size_OurArray -1; b++)
        {
            if(OurArray[b] > OurArray[b+1])  // u can change "<" to ">" in this line to switch between ascending and descending order types.
            {
            int temporary = OurArray[b];
            OurArray[b] = OurArray[b+1];
            OurArray[b+1] = temporary;
            }

        }
    }
    
}



void printOurArray(char OurArray[], int size_OurArray)
{
    for (int i = 0; i < size_OurArray; i++)
    {
    printf("%c ", OurArray[i]);
    }
}

// btw, this is some kind of "BUBBLE SORT". but what is bubble sort?
// good question...
// I can google it tho