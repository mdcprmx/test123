#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a nickname
//           it is mostly used to type less repetetive code

typedef char user[12];
typedef int score;
typedef int HP;
typedef double ult_charge;
typedef int box[2][5];


int main()
{
// 0 - declaration
user Player1 = "Alexa";    // so it is the same as < char user[12] = "Alexa" >
user Player2 = "Jotaro";

score Boii1 = 5;         // and this is the same as < int score Boii1 = 5 >
score Boii2 = 2;

HP Man1 = 92;           
HP Man2 = 100;

ult_charge Energy_YaeMiko = 23.7;    
ult_charge Energy_Nevilette = 100.0;

box KorobkaOdin = {{1,2,3,4,5}, {6,7,8,9,10}};  // instead of < int box[2][5] KorobkaOdin = ...>
box KorobkaDva = {{22,33,11,51,62}, {57,23,15,67,59}};

// 1 - main body

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}