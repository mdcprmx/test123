#include <stdio.h>
#include <stdlib.h>

// pointer = it's like a variable, but it is a reference. 
//           It contains a memory adress as value. And this address - is pointing to another value.
//           some tasks are better performed with pointers, rathen than variables.
//           
// Think of pointers as.. Asset Browser in Blender? I guess it's a good analogy?
// anyway, it contains MEMORY ADRESS, not value.


// think of it like a Email - you can always write a text email to the person
// while talking with them irl might not be avaible all the time.

// or think of pointers as SMS messages that will 100% will be delivered to person
// rather than text mail on paper in real life, that may get lost in transit.
//    (does that makes sense? I dunno, but it is as it is. As I understand it rn.)


// basic formula to assign a pointer:
// int *pX = &x;
//
// it is a good practice to name pointers as "pName" or "pResult" or "pInputBoxValue"
// adding "p" in front as a saying that this is a pointer.
//
// * = indirection operator (value at adress)
// & = appersand, it's needed when assignin a pointer too.

// it is also a good practice to stay consistent: keep varialbe and its' pointer the same var type
// for example:
// int age;
// int pAge;
//
// char[] name;
// char[] pName;


int main()
{
// 0 - declaration

/*
//// one way to declare
int *pCookies = NULL;   //  A good practice is to assign NULL if declaring a pointer
                        // and not yet declaring a value.


//// another way to declare
int pills = 5;
int *pPills = &pills;    // if u know value right away.


//// yet another way to declare
int *pChoco_bars = NULL;
int choco_bars = 32;
int *pChoco_bars = &choco_bars;

*/

//// and last one
int Result = 25;
int *pResult = &Result;


// 1 - main body
// btw "%p" means pointer adress.
printf("\nmemory address of var Result: %p", &Result);
printf("\nvalue of var Result: %d", Result);
printf("\nvalue of var pResult (pointer): %p", pResult);

printf("\n******************************\n");

printf("\nvalue that pResult points at: %d", *pResult); // in this case * is asking a value at adress
printf("\nvalue at pointer in pResult: %p", pResult);

printf("\n\n******************************\n\n");

printf("size of Result: %d bytes\n", sizeof(Result));
printf("size of pointer pResult: %d bytes\n", sizeof(pResult));


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
printf("\n");
return 0;
}