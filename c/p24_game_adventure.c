#include <stdio.h>

int main() {

    // 1 - declaration
    int choice;
    int choice_second;

    // 2 - user input
    printf("\n\n\nOnce upon a time, there lived a hedgehog. One day, he went on a forest trip, looking for food. ");
    printf("After a while, he found a fat juicy mushroom! Here, he had two choices:");
    printf("\n- (1): he will take the mushroom.");
    printf("\n- (2): he will find this mushroom suspicious, and go look for something else.\n");
    printf("\nWhat will our hedgehog friend will do? (1) or (2) : ");
    scanf("%d", &choice);    // input 1

    ////////////////////////
    ////////////////////////
    ////////////////////////

    // 3 - main body

    switch(choice){

        case 1:
        printf("\nYay! Happily, he took the mushroom and joyfully with a big smile on his face went home.");
        printf(" At home, he got another two choices:");
        printf("\n- (1): he will cook and eat it.");
        printf("\n- (2): he will save it for upcoming winter.\n");
        printf("\nWhat will our spiky friend will do this time? (1) or (2) : ");
        scanf("%d", &choice_second);    // input 2

            switch(choice_second){
            
            case 1:
            printf("\nNoice! After throughtfully cooking it and eating it, our hedgehog fell happily asleep! The end.\n");
            break;

            case 2:
            printf("\nHe was a little bit sad, but at the same time he understood that winter is coming, "); 
            printf("and he will need lots of food to survive. So he was OK with this choice too. The end.\n");
            break;

            default:
            printf("\nPlease, use only (1) or (2) as answers.\n");
            break;             
            }
            
        break;
        
        case 2:
        printf("\n\"It's too damn suspicious!\" our spiky friend said, and went looking for something more normal.\n");
        break;
        

        // alt cases. "easter eggs"
        case 3:
        printf("\nWithout thinking, he just ate this juicy mushroom on the spot. He didn't even cooked it properly! What a wild savage hedgehog!\n");
        break;

        case 0:
        printf("\nYeah, he can just turn back and go home. Our hedgehog friend will find some food later. Be it tommorow or on the next week.\n");
        break;
        // alt cases end.

    // if user input is wrong, default is executed.    
    default:
    printf("\nPlease, use only (1) or (2) as answers.\n");
    break;
    }
    
    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}