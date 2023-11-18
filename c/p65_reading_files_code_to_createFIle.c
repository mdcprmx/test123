#include <stdio.h>
#include <stdlib.h>


int main()
{
// 0 - declaration
FILE *pFile = fopen("poema.md", "w");

// 1 - main body
fprintf(pFile, "Hello there general Kenobi!\n");
fprintf(pFile, "You are my dearest friend!\n");
fprintf(pFile, "I want to give u a present!\n");
fprintf(pFile, "La-la-la-la~laaa~la!");





// 99 - end.
fclose(pFile);

//////////////////////
//////////////////////
//////////////////////
printf("\n");
return 0;
}