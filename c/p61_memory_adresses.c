#include <stdio.h>
#include <stdlib.h>

// https://www.youtube.com/watch?v=1KVpi0VN82E&t=171s

// btw, memory uses HEXIDECIMALS. what are they? in short, they use 0-9 and A-F symbols.
// while DECIMALS only use 0-9.

// memory = is an array of bytes within RAM
// memory block = a single unit (byte) within memory, that is used to hold some value
// memory address = the address of where a memory block is located.

// Imagine a huge warehouse, Amazon scale huge. 
// There are lots of tall shelves, and boxes on these shelves.
//
// This whole warehouse is MEMORY itself.
// Also,every shelf have it's own unique adress - MEMERY ADRESS.
// And inside boxes are VALUES.
//
// Depending of variable type, these values can be 1 byte, 4 bytes, 
//   8 bytes, 12 bytes, or even more.
// "Boxes" get bigger or smaller depending on its' value byte size. That also increases size in memory.

// char = 1 byte
// short = 2 byes
// float = 4 bytes
// int = 4 bytes
// double = 8 bytes
// arrays use whatever number of bytes, depending of array size.
// and char string is too, dependant on string lenght.


int main()
{
// 0 - declaration
short a = 'Y';
int b = 'Y';
float c = 'Y';
double d = 'Y';

// in bytes
printf("\n a is %d bytes", sizeof(a));
printf("\n b is %d bytes", sizeof(b));
printf("\n c is %d bytes", sizeof(c));
printf("\n d is %d bytes", sizeof(d));
printf("\n");


// this is a way to print memory adress for variable.
// printf("%p", &a);
printf("Memory adress of variable \"a\": %p\n", &a); // APPERSAND! dont forget it!
printf("Memory adress of variable \"b\": %p\n", &b); // usually it's used in scanf, but here it is too.
printf("Memory adress of variable \"c\": %p\n", &c);
printf("Memory adress of variable \"d\": %p\n", &d);


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}