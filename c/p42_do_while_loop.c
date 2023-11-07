#include <stdio.h>
#include <string.h>

int main()
{

// do while loop = always executes a block of code ONCE, then checks the condition.
//                 if this condition is true, then loop restarts again. 
//                 until condition is false.

// in this example I will make a simple "shooting game loop"

// 1 - declaration
char ask;
char ask2;
int bullets;
int bullets_summ = 12;

// 2 - lyrics
printf("\n\nZombie apocalypse is on us! You are left on the streets alone, with your trusty gun\n");
printf("Zombies are slowly coming in..\n\n");

// 3 - main body
do
{
    printf("\nShoot the zombie? ");
    scanf("%c", &ask);

    if (ask == 'y')
    {
    bullets_summ = bullets_summ - 1;
    printf("\nBullets left: %d\n", bullets_summ);
    }

    else if(ask == 'n')
    {
    printf("\nWould you'd like to reload ur gun?\n");
    scanf("%c", &ask2);

        if(ask2 == 'y')
        {
            bullets_summ = 12;
            printf("\nGun is reloaded! Bullets left: %d\n", bullets_summ);
        }
    }


    } while (bullets_summ > 0);

// okay, so.. I'll need to finish this "game"
// find a way for it to "break" in else if.
// tho it's pretty boring to write these text games..

// 4 - result
printf("\nYou're dead.\n");


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}