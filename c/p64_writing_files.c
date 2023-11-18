#include <stdio.h>
#include <stdlib.h>

// writing to file (using fopen, fprintf and pointer)
// "w" - write, overwrites too
// "a" - append, adds to existing (does NOT overwrites or deletes stuff)
// "r" - read.

// btw right now this whole program will CREATE and then DELETE testt.md file
// soo keep that in mind.

int main()
{
// 0 - declaration
FILE *pFile = fopen("testt.md", "w");   // file open (fopen)  // it aslo CREATES a text file
// example 2: FILE *pFile = fopen("C:\\Users\\MyName223\\Desktop\\test.txt", "w");
// example 3: FILE *pFile = fopen("~..\\home\\myname\\downloads\\test.md", "w");
// soo "w" overwrites any existing data
// and "a" adds, appends data 
// what is this "FILE" command tho? idk.

// 1 - main body
fprintf(pFile, "\nI like turtles too!"); //


if(remove("testt.md") == 0) // if it returns 0, then it was succesfull
{
printf("\nFile was deleted! noice.");
}
else
{
printf("File wasn't deleted.");
}

// 99 - end.
fclose(pFile);    // it is overall better to CLOSE all files that u have opened.
                  // it might cause some bugs otherwise.




//////////////////////
//////////////////////
//////////////////////
printf("\n");
return 0;
}