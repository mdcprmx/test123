#include <stdio.h>
#include <string.h>

struct suspects
{
    char name[12];
    int id;
    char note[60]; 
};

int main()
{
// 0 - declaration
struct suspects sus1 = {"Bob", 536728, "WasNearCrimeScene."};
struct suspects sus2 = {"Dick Mullen", 123456, "WasInsideTheCrimeScene!"};
struct suspects sus3 = {"Tartaglia", 696969, "WasCapturedWithaKnife!"};

struct suspects suspects_list[] = {sus1, sus2, sus3}; // STRUCT ARRAY IS HERE
// we have put sus1, sus2, and sus3 inside the Suspect_List!

// 1 - main body
// this loop loops for whatever number of elements are inside struct array <suspects_list>
// and then using [i] prints different info about them.

for(int i = 0; i < sizeof(suspects_list)/sizeof(suspects_list[0]) ;i++)
{
printf("\nName: %-15s", suspects_list[i].name);
printf("\tNote: %-25s", suspects_list[i].note);
printf("\tPassport ID: %d", suspects_list[i].id);
}

printf("\n");




// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}