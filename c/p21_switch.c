#include <stdio.h>

// switch = efficient alternative to using many "else if" statements
//          allows a VALUE to be tested againts many cases.

// break = used to stop programm from executing ALL THE CODE WITHOUT STOPPING
//         so, don't forget to paste BREAKs.

int main() {

    // 1 - Declaration
    int result;

    // 2 - User input
    printf("\n  So, you want to hear a story eh?\nLong long time ago, there was a small village where once lived a big scary wolf!\nDuring his life, he ate 5 piglets, 3 chickens, 9 rats, 1 apple and 2 cows.\nHow many living beings did he killed?\n");
    scanf("%d", &result);


    // 3 - Main body
    
    switch(result){

        case 19:
        printf("\nYeah, you are correct!\n");
        break;

        case 20:
        printf("\nBruh, apple is not alive.\n");
        break;

        case 0:
        printf("\nErm, no.\n");
        break;

        case 10:
        printf("\nHey! Rats may be vermin, and not many people love them, but they are still living beings!\n");
        break;

        case 69:
        printf("\nLmao, no. Not funny.\n");
        break;

        default:
        printf("\nError. Check your maths please.\n");

    }
return 0;
}