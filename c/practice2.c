#include <stdio.h>

int main (){

// variable = Allocated space in memory to store a value.
//            We can refer to a variable's NAME to access value stored in it.
//            That variable will behave as if it's the value it contains.
//            But we also need to declare what type of DATA we are storing (Integer, float, char, etc.)

// It starts with two crucial steps - Declaration and Initialization.

int x; // declaration
x = 1; // initialization

// or u can do it at the same time

int y = 5; // declaration + initialization

// 'int' means Integer btw, which means.. whole numbers. NO DECIMALS ALLOWED
// also, variables are allowed to be written as words.

int age = 25;
int bottles = 13;
int eggs = 4;
int boolets = 120;
int elemental_energy = 100;
int owned_characters = 24;
int inventory_limit = 1800;

// u got it, it can be written as words.
// ------
// 'float' means Floating Point Numbers (Fractional Numbers), 
// or just think of it as numbers with decimals.

float KPD = 2.5;
float DKP = 510.3;
float GDP = 5.07;
float other_efficiency_stat = 1337.69;

// 'char' means Character, as in alphabet. SINGLE LETTER ONLY. also NUMBERS ARE NOT ALLOWED
// and u must use < ' > single quote for value.

char grade ='C';
char favorite_letter = 'A';
char ship_class = 'D';
char rarity = 'S';
char massive_win = 'W';
char crazy_loss = 'L';

// 'char value[]' is used to display words.
// and this time u must use < " > double quotes.
// Why? well, go ask the guy who created this language 40 years ago

char name[] = "Alexa";
char surname[] = "Smith";
char favorite_food[] = "chocolate";
char favourit_drink[] = "tea";
char hobby[] = "fishing";
char weapon[] = "2H Sword";

// ------------ now comes the PRINT section. -------------

// < %d > - refers to integer numbers
//          from < int > variable
//          after comma u specify declared variable.

printf("You are %d years old",age);

// and some more examples.

printf("\n");
printf("You have %d flasks of health\n",bottles);
printf("Your fridge contains %d stacks of eggs\n",eggs);
printf("\nHero stats: \n");
printf("Ammo = %d\n",boolets);
printf("Elemental burst energy = %d\n",elemental_energy);
printf("\n");
printf("\n");

// < %s > - refers to string value,
//          from < char name[] > variable.

printf("Hello %s",name);

// and some more examples.

printf("\n");
printf("%s, your surname is %s?\n\n",name,surname); //refers to NAME first, and SURNAME after that.
printf("And you like %s right? It's yer favorite delicacy eh?\n\n",favorite_food);

printf("Oh, you also love to drink water! A true hydro homie!\n");
printf("But I enjoy %s, the drink of gods!",favourit_drink);

printf("\nYou also have a hobby eh? What is it?\n - %s.\n%s?! Woah, that's nice!",hobby,hobby);

printf("\n\n");
printf("Weapon Equipped: %s",weapon);

// < %f > - refers to number with decimals.
//          from < float > variable.

printf("Your DKP is %f",DKP);

// some moar examples.

printf("\n\n");
printf("Your IQ is %f, nice.",other_efficiency_stat);





}