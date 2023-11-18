#include <stdio.h>
#include <stdlib.h>


int main()
{
// 0 - declaration
FILE *pFile = fopen("poema.md", "r");
char buffer_1[255];
// our buffer will hold one line of text, in our file, at any given time

// 1 - check if file even exists
if(pFile == NULL)
{
    printf("File does not exist.\n"); //run p65_code_to_create_poem first, or not whatever.
    return 1;
}


// 2 - "read content of poema.md" body
fgets(buffer_1, 255, pFile);  // fgets - reads whatever it is from pFile and adds it to buffer_1
printf("%s", buffer_1);       // and now our buffer contains 1st line from poema.md

while(fgets(buffer_1, 255, pFile) != NULL)  // While fgets doesnt return NULL (empty line)
{                                           
    printf("%s", buffer_1);                 // print contents of buffer_1.
}


fclose(pFile);


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
printf("\n");
return 0;
}