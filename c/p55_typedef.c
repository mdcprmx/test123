#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a %nickname%
//           it is mostly used to type less repetetive code

// we can also combine it with STRUCT. That's where it shines!

typedef struct // Hero // <-- IT WONT WORK UPTOP FOR SOME REASON?!
{
    char character_name[12];
    int weapon_type; // 0 - sword, 1 - bow, 2 - staff, 3 - mace (tho, it's not relevant)
    char skill_name[25];
    double max_HP;
} Hero; // !!IMPORTANT!! struct name when combined with typedef is written after brackets, in the end
// why? I dunno, but it just won't work written uptop

int main()
{
// 0 - declaration
Hero player1 = {"Alex", 0, "Super Smash!",160.00};  
Hero player2 = {"Reinhardt", 3, "HAMMER DOWN!", 200.00};
Hero player3 = {"Hu Tao", 2, "Spirit Soother", 60.00};
// btw it follows the same order it was declared in <typedef struct>
// so in this example it is: 
// {char string, int, char string, double}

// 1 - main body
printf("\nP1 name = %s, Weapon = %d, Skill Name = %s, MAX HP = %.2lf", player1.character_name, player1.weapon_type, player1.skill_name, player1.max_HP);
printf("\n");
printf("\nP3 name %s, ", player3.character_name);
printf("weapoN %d, ", player3.weapon_type);
printf("maks HP %.2lf, ", player3.max_HP);
printf("skill %s.", player3.skill_name);
printf("\n");



// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}