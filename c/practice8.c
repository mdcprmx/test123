#include <stdio.h>
#include <string.h>

int main (){
    
    // Section 1:
    char one = '?';
    char two = '\?';

    printf("Let's compare chars: %d - %d\n", one, two);
        if (one == two){
            printf("IT IS EQUAL!!!1!!1!\n\n");
        }
        else {
            printf("it is NOT equal..\n\n");
        }
    
    // Section 2:
    char tree[] = "?";
    char four[] = "\?";
    
    printf("Now lets compare strings: %s - %s\n", tree, four);
        if (strcmp(tree, four) == 0){
            printf(" Strings are equal.\n");
            }
        else {
            printf("Strings are not EQUALLL....\n");
            }

    return(0);
}