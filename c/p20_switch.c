#include <stdio.h>

// switch = efficient alternative to using many "else if" statements
//          allows a VALUE to be tested againts many cases.

int main() {

    // 1 - Declaration
    int number;

    // 2 - User input
    printf("\nEnter your favourite number: ");
    scanf("%d", &number);

    // 3 - Main body
    
    switch(number){
        
    case 1: 
        printf("Lonely one.\n");
        break;
    case 2: 
        printf("Two is better than one.\n");
        break;
    case 3: 
        printf("Three, the number that God loves.\n");
        break;
    case 4: 
        printf("Rectangle!\n");
        break;
    case 5: 
        printf("High five!\n");
        break;
    case 6: 
        printf("Six is afraid of 9?\n");
        break;
    case 7: 
        printf("Seven, the number that everyone loves.\n");
        break;
    case 8: 
        printf("Eight, a six and nine's love child.\n");
        break;
    case 9: 
        printf("Nine. NAIN!.\n");
        break;
    case 0: 
        printf("Heh, I like NULLs too.\n");
        break;
    case 13: 
        printf("The cursed number eh?.\n");
        break;
    case 27: 
        printf("I love this number too.\n");
        break;
    case 69:
        printf("Funny sex number, eh.\n");
        break;
    case 666: 
        printf("Hell Yeah!\n");
        break;
    case 777: 
        printf("Lady Luck Love.\n");
        break;
    case 99: 
        printf("NINETY NINEEEE.\n");
        break;


    // default means ELSE basically; default code to run if not a single case matches.
    default: 
        printf("Oopsie, I don't have any opinion on this number.\n");
    }

return 0;
}