#include <stdio.h>
#include <string.h>

int main()
{

// do while loop = always executes a block of code ONCE, then checks the condition.
//                 if this condition is true, then loop restarts again. 
//                 until condition is false.

// 1 - declaration
int numbero = 0;
int summ = 0;

// 2 - main body

do
{
    printf("\nPlease, enter a number that is greater then three: ");
    scanf("%d", &numbero);
    if(numbero > 3)
    {
        summ = summ + numbero;    // other way of writing this "sum += number"
    }
} 
while(numbero > 3);



// 4 - result
printf("\nOH NO WHAT HAVE YOU DONE?! U TYPED A NUMBER EQUAL TO, OR LESS THEN THREE!!!1!!1!\n");
printf("btw here's summary result of ur numbers: %d\n", summ);

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}