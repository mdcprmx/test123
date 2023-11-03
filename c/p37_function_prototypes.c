#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int ask_age(int);          // this is a Function Prototype
int ask_fingers(int);      // this too.
int ask_relatives(int);    // and that too.

int main() 
{
    // 0 - declaration
    int age;
    int fingers;
    int relatives;

    // 1 - main body
    age = ask_age(age);
    fingers = ask_fingers(fingers);
    relatives = ask_relatives(relatives);
    
    // btw, if u just invoke functions without assigning a variable to them, then 
    // programm will not be able to read "age" or "fingers" or whatever variable,
    // and just display it as 0.
    // ....
    // WRONG: "ask_age(age)"
    // RIGHT: "age = ask_age(age)"


    // 2 - results
    printf("\nSo, you are %d years old. ", age);
    
    if (fingers == 20) 
    {
        printf("You are healthy human being (with 20 fingers). ");
    }
    else if (fingers == 21) 
    {
        printf("What? 21 fingers? How? ");
    }
    
    else {
        printf("You have %d fingers for some reason, I am sorry. ", fingers);
    }

    printf("And you have %d siblings.\n \nThat's nice!.\n", relatives);


    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}

// THOSE ARE FUNCTIONS, that previously in p1-p36 we have written before main.
// now they are BELOW main. cuz it's easier to understand code this way.
// aand Function Prototypes refer to these.

int ask_age(int x)
{
    printf("\nHello, please tell me your age?\n");
    scanf("%d", &x);
    return x;
}

int ask_fingers(int fingers)
{
    printf("\nThat's totally random, but how many fingers do you have?\n");
    scanf("%d", &fingers);
    return fingers;
}

int ask_relatives(int relatives)
{
    printf("\nA-and how many brothers and sisters do you have?\n");
    scanf("%d", &relatives);
    return relatives;
}