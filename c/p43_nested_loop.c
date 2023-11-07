#include <stdio.h>
#include <string.h>

int main()
{

// nested loop = a loop inside of another loop
//               these are niche, extremely rare. 
//               but it's better to know about them.


// 1 - declaration
int ryadi;
int kolonny;
char simvol;



// 2 - user inputs
printf("\nEnter desired number of rows: ");
scanf("%d", &ryadi); // input 1

printf("\nEnter desired number of columns: ");
scanf("%d", &kolonny); // input 2

getchar(); // it is used to clean programm's buffer, 
             // u can try to mute this line to see what happens. 

printf("\nEnter a symbol to use: ");
scanf("%c", &simvol);  // input 3



// 3 - main body
for(int a = 1; a <= ryadi; a++)     // in charge of rows
{

    for(int b = 1; b <= kolonny; b++)    // in charge of columns
    {
        printf("%c", simvol);
    }
    printf("\n");

}



// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}