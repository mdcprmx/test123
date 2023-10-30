#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// function = this is a section of code, that is exectuted when it is called (invoked)
//            something like a.. script? a shortcut? for tedious operations that u repeat many times
//            in different scenarios.

// !!! FUNCTIONS CANT SEE INSIDE OTHER FUNCTIONS (in this case, "ask_player" CANT see variables inside "main")
//     so we have to pass them as ARGUMENTS when invoking a function.

void shoot_pistol(int pistol_ammo)
{
    pistol_ammo = pistol_ammo - 1;
}


/*
void shoot_rifle(int rifle_ammo)
{
    rifle_ammo = rifle_ammo - 4; // cuz u shoot rifle in bursts, not single shot.
}

void throw_grenade(int grenades)
{
    grenades = grenades -1;
}

void taking_damage_zombie_claws(double hp)
{
    hp = hp -10;
}

void taking_damage_zombie_bite(double hp)
{
    hp = hp -35;
}
*/


int main() 
{
    // 0 - declaration
    int pistol_ammo = 24;
    int rifle_ammo = 90;
    int grenades = 2;
    double hp = 100;

    // 1 - main body
    printf("\nZombie apocalypse is on us! People are screaming, hordes of zombies attack everyone");
    printf("\nand all you can do is run to the nearest house and barricade the doors.");
    printf("\n\n");
    printf("But of course, by the laws of genre - zombies start to attack your house! But fret not, for you have:\n");
    printf("- Your lovely rifle - AR15, with %d bullets.\n", rifle_ammo);
    printf("- You also have a pistol - Glock17, with %d bullets.\n", pistol_ammo);
    printf("- And only %d grenades.\n", grenades);
    
    shoot_pistol(pistol_ammo);
    shoot_pistol(pistol_ammo);
    shoot_pistol(pistol_ammo);

    printf("\n\nYou have %d pistol ammo left.\n", pistol_ammo);
    
    // bruh, it doesn't "SAVE" the new variable number, will have to return to this code later.
    // I kind-a understand why, but I lack knowledge to actually make it work. For now.

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}