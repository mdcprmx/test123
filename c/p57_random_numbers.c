#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// hmm, strange. I can say for sure that I did this before.. anyway:

// random numbers (not rly tho) = a set of values or elements that are statistically random
//                                (not rly random tho, don't use them for secutity stuff)

int main()
{
// 0 - declaration
srand(time(0));    // seed random, just like in Blender! random seeds are used everywhere it seems
                   // and in this scenario it is dependant on time irl
                   // why (0) tho? hmmm... cause it says "use time that is RIGHT NOW"               

// int numbahh1 = rand(); // rand gives u a number between 0-32.767. But we don't need that large numbers

enum n {RandomMax = 95}; // set the RandomMax here
int numbahh1 = (rand() % RandomMax) +1; // +1 cuz computers start with 0 (so we have to compensate)
int numbahh2 = (rand() % RandomMax) +1;

// 1 - main body
printf("\n");
printf("Number one: %d\n", numbahh1);
printf("Number two: %d\n", numbahh2);




// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}