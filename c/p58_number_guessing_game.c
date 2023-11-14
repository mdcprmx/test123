#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{
// 0 - declaration
const int RAND_MIN = 1;
const int RANDMAX = 30;
int guess;
int answer;
int total_guesses;

srand(time(0));

// 1 - main body
answer = (rand() % RANDMAX) + RAND_MIN;

printf("\nHello! Wanna play a number guessing game?! Of course you are!");

do
{
printf("\nPlease, enter your guess: ");
scanf("%d", &guess);


    if(guess > answer)
    {
    printf("Guess is too high!\n");
    }


    else if(guess < answer)
    {
    printf("Nuh uh, too low!\n");
    }

    else    // like.. if it's not higher or lower than %guess% - then it is right!
    {
    printf("You're correct! Happy ending!\n");
    }

total_guesses = total_guesses +1;  // counts total guesses.
} while (guess != answer);         // while guess not equal answer.

printf("___________________\n");
printf("Answer: %d\n", answer);
printf("Total guesses: %d\n", total_guesses);
printf("___________________\n");






// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}