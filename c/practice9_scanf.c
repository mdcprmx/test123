#include <stdio.h>
#include <string.h>

int main (){
    
    // Section 1 - Declaration:
    int years_old;
    char name[25]; // 25 refers to character limit. It will overflow if over that number.
    char story[99];


    // Section 2 - Main Function - fgets:
    printf("\nSo what's your short story? Why are you here?\n");

    fgets(story, 99, stdin);        // allows programm to read white spaces.
    story[strlen(story)-1] = '\0';  // also this FGETS function cannot be added in programm end.

    printf("\nWelp, \"%s\" cool story.\n", story);



    // Section 2 - Main Function - Age:
    printf("\nHey man, how old are you?\n");
    scanf("%d", &years_old); // & - THE MOST IMPORTANT THING ABOUT SCANF
                             //     never forget about adding this symbol for variables in scanf.
                             //     official name of this symbol is "ampersand".
    
    printf("Nice, u are %d years old!\n\n", years_old);



    // Section 2 - Main Function - Name:
    printf("Also.. what's ur name my man?\n");
    scanf("%s", name);
    printf("Glad to meet ya %s, my name's Anthony.\n\n", name);



    // Section 2 - Main Function - fgets:
    //printf("\nSo what's your short story? Why are you here?\n");
    //fgets(story, 25, stdin);
    //story[strlen(story)-1] = '\0';
    //printf("\n Welp, cool story.");

    // As you can see, I have tried to add FGETS in the end.
    // It didn't work.
    // Cause programm doesn't need/wants any input in the end I guess.

    return(0);
}