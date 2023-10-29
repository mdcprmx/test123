#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// function = this is a section of code, that is exectuted when it is called (invoked)
//            something like a.. script? a shortcut? for tedious operations that u repeat many times
//            in different scenarios.

void error_msg()
{
    printf("\nWe are extremely sorry, but there are something wrong in the code.");
    printf("\nPlesae, call our service support phone number \"555-01-01-587\", Thank you.\n\n");
}

void sleep()
{
    printf("\nAs a human being, I need to sleep every day.\n");
}

void eat()
{
    printf("\nAs a human, I need to eat food..");
}

void work()
{
    printf("\nAs a hooman, I also need to work.. or I will die starving.");
}


// btw, "int main()" is a function too
int main() {
    // 0 - invoking
    eat();
    work();
    sleep();

    error_msg();
    error_msg();

    eat();
    work();
    sleep();

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}