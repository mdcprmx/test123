#include <stdio.h>
#include <stdlib.h>

// pointer = it's like a variable, but it is a reference. 
//           It contains a memory adress as value. And this address - is pointing to another value.
//           some tasks are better performed with pointers, rathen than variables.
//           
// Think of pointers as.. Asset Browser in Blender? I guess it's a good analogy?
// anyway, it contains MEMORY ADRESS, not value.

// basic formula to assign a pointer:
// int *pName = &name;
//
// it is a good practice to name pointers as "pName" or "pResult" or "pInputBoxValue"
// adding "p" in front as a saying that this is a pointer.
//
// * = indirection operator (value at adress)
// & = appersand, it's needed when assignin a pointer too.


void printNumber(int number)
{
printf("Printing var number: %d", number);
}


void printNumberUsingPointer(int *pNumber)
{
printf("Printing insides of var number using pointer: "); 
printf("%d", *pNumber); // dereference, stop referencing
}


int main()
{
// 0 - declaration
int number = 24;
int *pNumber = NULL;     // since we added * in this line
pNumber = &number;       // we don't need to add * again in this line.


// 1 - main body
printf("\n");


printNumber(number);      // the basic way everyone knows about
printf("\n");
printNumberUsingPointer(pNumber);    // advanced, just learned about this

// soo these two functions act EXACTLY THE SAME. They show contents of variable "number"
// but are coded in different ways
// one is basic, second is using pointers.

// 99 - end.

//////////////////////
//////////////////////
//////////////////////
printf("\n");
return 0;
}