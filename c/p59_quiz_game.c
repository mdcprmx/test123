#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
// 0 - declaration
char quiz_questions[][100] = {
                                "1. What is the purpose of life on planet Earth?: ",
                                "2. When I was born?: ",
                                "3. When did 21-st century start?",
                                "4. Who are the JoJo's?",
                             };
enum Number_Quiz_Questions {NumberQQ = 4}; // this number is UP here ^ // its a total number of quiz questions

char quiz_options[][100] =   {
                                "A. Survival", "B. Consumption", "C. Happiness ", "D. Love ",
                                "A. 1502", "B. 1900", "C. 1995", "D. 2023",
                                "A. 1900", "B. 2000", "C. 2100", "D. 2021",
                                "A. Bad guys who beat good guys", "B. Good guys who beat everyone", "C. Warriors who protect the universe!", "D. Bizzare relatives with \"Jo\" phonetic sound in their name.",
                             };

char quiz_answers[4] = {'A', 'C', 'B', 'D'}; // correct scanf inputs, in order.

int quiz_total_questions_number = sizeof(quiz_questions)/sizeof(quiz_questions[0]); // dynamic calc in int.

char quiz_guess;     // used for user input only
int quiz_score = 0;  // used to count Correct answers only.



// 1 - main body
printf("\nQUIZ GAMEEE BEGIINS!\n");


for(int a = 0; a < quiz_total_questions_number; a++)
{
////////////////////
// for loop start //
////////////////////

printf("%s\n", quiz_questions[a]);

    for(int b = (a * NumberQQ); b < (a * NumberQQ) + NumberQQ; b++) // btw, that's DOPE AF formula!
    {
    printf("%s\n", quiz_options[b]);
    }

printf("Guess: ");
scanf("%c", &quiz_guess);
scanf("%c"); // clears new line from input buffer, don't touch it.
printf("\n");

quiz_guess = toupper(quiz_guess); // makes it so lower case turns into upper case.

    if(quiz_guess == quiz_answers[a])
    {
    printf("Correct!\n");
    quiz_score++; // score goes up by 1.
    }

    else
    {
    printf("Wrong!\n");
    }; 

////////////////////
//  for loop end  //
////////////////////
}


printf("/////////////////////\n");
printf("Final Score: %d/%d\n", quiz_score, quiz_total_questions_number);
printf("/////////////////////\n");


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}