#include <stdio.h>
#include <string.h>

// array = a data structure that can store many values of the same data type.
//         when declaring, a number in [] represents total number of elements in the array.
//         if there is no number in [], it just means that there's no hard limit to elements.

int main()
{

//// 0 - declaration
int weapon_ammo[3] = {60, 24, 3};

//// 1 - main body
printf("\nHow many boolets do u have?\n\n");
printf("Primary: %d\nSecondary: %d\nGrenades: %d\n", weapon_ammo[0], weapon_ammo[1], weapon_ammo[2]);

printf("\nZombies attack! After a 30 minute fight, how many boolets do u have now?");

weapon_ammo[0] = weapon_ammo[0] - 56;
weapon_ammo[1] = weapon_ammo[1] / 2;
weapon_ammo[2] = weapon_ammo[2] - 3;
// weapon_ammo[3] = weapon_ammo[3] + 5; // so, there is no 3rd element, cuz it starts with 0.
// u can unmute this line to see what happens.

printf("\n\nPrimary: %d\nSecondary: %d\nGrenades: %d\n", weapon_ammo[0], weapon_ammo[1], weapon_ammo[2]);

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}