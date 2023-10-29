#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    // logical operators = || (OR) checks if at least ONE condition is true
    //                     

    // 1 - declaration
    float boolets;

    // 2 - user input
    printf("\nPlease, write the amount of bullets your gun holds.\n");
    scanf("%f", &boolets);

    // 3 - main body
    if (boolets <= 10 && boolets >= 5){
        printf("\nI bet you have a small handgun! A pistol.\n");
    }

    else if(boolets >= 11 && boolets <= 25){
        printf("\nYou must be having a DMR, or marksman rifle.\n");
       
    }

    else if(boolets >= 26 && boolets <= 99){
        printf("\nAssault rifle you have, or the one with extended mag.\n");
      
    }
    else if(boolets == 0 || boolets == -1){   // the only OR log operator in this practice, oopsie.
        printf("\nWhat?! Weird answer.\n");
      
    }

    else{
        printf("\n%.0f boolets? What kind of gun is that... some old, pre-historic era \"gun\"? Or an old sniper rifle.\n", boolets);
    }

    


    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}