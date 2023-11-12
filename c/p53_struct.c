#include <stdio.h>
#include <string.h>

// struct = some sort of structure (bruh), collection of related members
//          thye can be of different data types, (arrays CANT! thats different!)
//          listed under ONE NAME in a block of memory

//  In a way, struct reminds of "variables" but instead of just one box
//  it is a whole package with many boxes.
//
//  Think of it like a Shader Editor in Blender, where u have many Slots in the same model
//  something like.. "Slot 1" is for Face shader, "Slot 2" is for Body shader, "Slot 3" is for arms, etc.
//  but here it's for variables! instead of "Slot" it is a variable.                  

struct PlayeableCharacter
{
char name[16];
int health;
double money;
};  //  don't forget ";" here.



int main()
{
// 0 - declaration
struct PlayeableCharacter Trevor;
struct PlayeableCharacter Michael;
struct PlayeableCharacter Franklin;
// soo ur like assigning variables according to struct 
// from %STRUCT_NAME% to %VARIABLE_NAME%

printf("\nName:\"%s\", HP:%d, Money:%.2lf$\n", Trevor.name, Trevor.health, Trevor.money);
printf("Broke ass beatch with no name!\n");
// by default its all 0. no name, no HP, no money.
// we have to assign these values

strcpy(Trevor.name, "Trevor");
Trevor.health = 29;
Trevor.money = 12.25;

printf("\nBAM!\n");
printf("NOW UR SOMEBODY!\n");

printf("\nName:\"%s\", HP:%d, Money:%.2lf$\n", Trevor.name, Trevor.health, Trevor.money);

printf("\nBut u also have a friend!\n");
strcpy(Michael.name, "Michael");
Michael.health = 100;
Michael.money = 99997399.99;

printf("\nName:\"%s\", HP:%d, Money:%.2lf$\n", Michael.name, Michael.health, Michael.money);


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}

// structs are also VERY SIMILAR to CLASSES in other languages (but no methods support)
// tho, as a total newb in programming - WHAT ARE CLASSES?! I DONT KNOOOOWWWW
// but will know in a year or.. later, whatever.