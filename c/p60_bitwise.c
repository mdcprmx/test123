#include <stdio.h>

// BITWISE OPERATORS = special ops that are used in bit level programming
//                     (knowing binary is important for this, so go teach it!)
//                     (or not, depends if u rly need this knowledge )

int main()
{
// 0 - declaration

// & = AND
// | = OR
// ^ = XOR (Exclusive OR)
// << = left shift, moves whole value left
// >> = right shift, moves it right instead.

int a = 6;   //  6 = 00000110 (in binary it is written this way)
int b = 12;  // 12 = 00001100 
int res = 0; //  0 = 00000000


// 1 - main

res = a & b; //  4 = 00000100, and this number is 4.
printf("AND = %d\n", res);
// How does AND (&) work? well... u know...ermm.... mathemagics!
// it's easier to just google it brah
// tho, I can say that it compares One's and Zero's, and then replaces it if either of them is One (in binary)

res = a | b;
printf("OR = %d\n", res);

res = a ^ b;
printf("XOR (Exclusive OR) = %d\n", res);

res << 2;
printf("Left shift = %d\n", res);
// it moves whole value left, in binary.
// Usually it doubles value. i.e (x * 2)

res >> 2;
printf("Right shift = %d\n", res);
// moves right, usually it divides value. i.e (x / 2)


// there's also a COMPLEMENT operator (~) that is complex.
// but do u rly need to know this?
// if u do, u can just google it.



// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}