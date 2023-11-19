#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// GLOBAL variables, unlike local variables, these work EVERYWHERE
// but there are some downsides to using them.
// and using local vars would be a nightmare of endless pointers pointing everywhere
char gBoard[3][3];
const char PLAYER = 'O';
const char NPC = 'X';

// these are function prototypes
void boardReset();
void boardPrint();
int checkFreeSpaces();
char checkWinner();
void playerMove();
void npcMove();
void printWinner(char);



int main()
{
// 0 - declaration
char winner = ' '; // sets condition for winner, if winner is an empty space - it's pat.

// 1 - body
boardReset();

while(winner == ' ' && checkFreeSpaces() != 0) // loop that drives game. until winner is found
{
    boardPrint();

    // for plyaer
    playerMove();
    winner == checkWinner();
    if(winner != ' ' || checkFreeSpaces() == 0)
    {
        break;
    }

    // for NPC
    npcMove();
    winner == checkWinner();
    if(winner != ' ' || checkFreeSpaces() == 0)
    {
        break;
    }

}

boardPrint();
printWinner(winner);


// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}


// functions are here
// 1 - Resets Board
void boardReset()
{
    for(int a = 0; a < 3; a++) // outer for loop is for ROWS
    {
        for(int b = 0; b < 3; b++) // inner loop for colums
        {
            gBoard[a][b] = ' ';  // so it clears it from being X or O to empty space
        }
    }

}


// 2 - Prints Board
void boardPrint()
{
    printf(" %c | %c | %c ", gBoard[0][0], gBoard[0][1], gBoard[0][2]);
    printf("\n___|___|___\n");
    printf(" %c | %c | %c ", gBoard[1][0], gBoard[1][1], gBoard[1][2]);
    printf("\n___|___|___\n");
    printf(" %c | %c | %c ", gBoard[2][0], gBoard[2][1], gBoard[2][2]);
    printf("\n");

}


// 3 - duh, cheks for free spaces and declares a winner if there no 
int checkFreeSpaces()
{
int freeSpaces = 9;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(gBoard[i][j] != ' ') // If whatever space on board is not occupied
            {
               freeSpaces--;       // decrement iy by one.
            }
        }
    }

return freeSpaces; // returns number that determines if its GAME OVER or not.
}


// 4 - Check for who is a winner
char checkWinner()
{
    // check rows
    for (int q = 0; q < 3; q++)
    {
        // we need to check each set of horizontal elements.
        if(gBoard[q][0] == gBoard[q][1] && gBoard[q][0] == gBoard[q][2]) // cheks if there are " X | X | X " in one row.
        {
            return gBoard[q][0]; // if its true, we have a winner // and it returns whatever char it is.
        }
    }


    // check columns
    for (int q = 0; q < 3; q++)
    {
        // this cheks each set of vertical
        if(gBoard[0][q] == gBoard[1][q] && gBoard[0][q] == gBoard[2][q]) // checks vertical.
        {
            return gBoard[0][q]; // returns as above.
        }
    }

   
    // check first diagonal
    if(gBoard[0][0] == gBoard[1][1] && gBoard[0][0] == gBoard[2][2]) // checks diagonal from left to right.
    {
        return gBoard[0][0]; // returns as above.
    }
    
    // second diagonal
    if(gBoard[0][2] == gBoard[1][1] && gBoard[0][2] == gBoard[2][0]) // checks diagonal from left to right.
    {
        return gBoard[0][0]; // returns as above.
    }

return ' '; // if after checking everything there is no winner, restart.
}


// 5 - When player moves
void playerMove()
{
    int x;
    int y;
    // as in X and Y axis // we ask player where to move to, here

    do 
    {
    printf("Pls, enter row (1-3): ");
    scanf("%d", &x);
    x--; // decrement by one cuz computers think in 0-2 range, while users in 1-3

    printf("Pls, enter column (1-3): ");
    scanf("%d", &y);
    y--; // same reasoning as above.

    if(gBoard[x][y] != ' ') // cheks if spot is full
    {
        printf("Error, invalid move.\n");
    }
    else 
    {
        gBoard[x][y] = PLAYER; // places player X or O sign where player told it to.
        break;
    }

    } while (gBoard[x][y] != ' ');  // if place is occupied, we will ask player to try again.

}


// 6 - When computer moves
void npcMove()
{
    // NPC will move randomly based of time
    // we'll need SEED for that
    srand(time(0));
    int k;
    int l;

    if(checkFreeSpaces() > 0) // NPC moves after checking for free spaces
    {
        do
        {
            k = rand() % 3;
            l = rand() % 3;

        } while(gBoard[k][l] != 0); // while spot is not equal to empty space 

        // If we find an open space
        gBoard[k][l] = NPC; // put NPC tag in there.

    }
    else
    {
        printWinner(' '); // empty space, meaning it's a draw, pat.

    }


}


// 7 - WINNNER WINNER CHICKEN DINNER
void printWinner(char winner)
{
    if(winner = PLAYER)
    {
        printf("\nWINNER WINNER U ARE!");
    }
    else if(winner == NPC)
    {
        printf("\nYou have lost, computer won.");
    }

    else
    {
        printf("\nIt's a tie! DRAW!");
    }
}
