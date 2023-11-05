#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// needed for string functions

int main()
{

// 1 - declaration
char first_name[] = "John";
char second_name[] = "Firehand";

// 2 - main body
printf("\n%s\n", first_name);
// strlwr(second_name);              // converts a string to lower case
// strupr(second_name);              // converts a string to upper case
//
// for some reason, be it my compiler (gcc) or I dunno why, strlwr and strupr doesn't work for me.
// maybe I'm just cursed? lmao
// ...
// oh, I have found the reason. Win10 uses different <string.h> file with strlwr and strupr set up
// while unix systems use..  "basic" <string.h>, so yeah, I'm on Linux so that's why.

strcat(first_name, second_name);                            // appends second_name to end of first_name
printf("\nstrcat (string concatenate): %s\n", first_name);  // why is it called "cat" tho?... string meow?
                                                            // cuz "concatenate", unify basically.

strncat(first_name, second_name, 2);
printf("\nstrncat (string N chars, concatenate): %s\n", first_name);
// appends N characters from second_name to first_name
// basically it takes set Number of characters from "second_name" in this case,
// and adds them to "first_name".
// ...
// but if ur not mute'ing previous "strcat" line, then this "strNcat" line starts to bugging.

strcpy(first_name, second_name);         // copy second_name to first_name
printf("\nstrcpy (string copy): %s\n", first_name);
// it copies string from second_name to first_name, replacing it's content.

strncpy(first_name, second_name, 5);
printf("\nstrncpy (string N chars, copy): %s\n", first_name);
// copy N characters of second_name to first_name, replacing content inside first_name.

//strset(first_name, '?');             
//printf("\nstrset (string set): %s\n", first_name);
//  sets all characters of a string to a given character.
//  once again, it doesn't work in vanilla UNIX.

//strnset(first_name, 'x', 1);
//  sets first N characters of a string to a given character.
//  this too, doesn't work in UNIX. I'll have to add these functions in <string.h> manually.

//strrev(first_name);
//  reverses a string. It does'nt work in UNIX too.

char name3[] = "Tomatoki";
int result = strlen(name3);    // returns string length as int
printf("\nname3 = %s \nstrlen (string lenght): %d\n", name3, result);

int resulttt = strcmp(first_name, second_name); 
// string compare all characters
// if they are the same, it will return 0.
printf("\nfirst name: %s\nsecond name: %s\n", first_name, second_name);
printf("strcmp(string compare): %d\n", resulttt);

// strncmp(a, b, 1);    // string compare N characters
// strcmpi(a, b);       // string compare all, ignore case.
// strnicmp(a, b, 1);   // string compare n characters, ignore case.



// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}