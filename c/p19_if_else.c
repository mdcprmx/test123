#include <stdio.h>

int main() {

    // 1 - Declaration
    int age;

    // 2 - User input
    printf("\nPlease, enter your age: ");
    scanf("%d", &age);

    // 3 - Main body

    if(age >= 21){
        printf("Noice, you are allowed to drink alcohol!\n");                // IF block
    }
    else if(age < 0){
        printf("What? You haven't been born yet!");                          // second IF block
    }
    else{
        printf("Nope, ur not allowed to drink alcoholic beverages!\n");  // ELSE block
    }


return 0;
}