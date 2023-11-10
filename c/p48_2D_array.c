#include <stdio.h>
#include <string.h>

// 2D array = an array of whatever type, where each element is another array.
//            useful if u need a matrix, grid, or table of data.
//            

int main()
{

// 0 - declaration
int numbers[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
//          ^
//          |
//         [2] refers to total number of arrays within array (number of array as elements) ((it's also optional to set this as hard number))
//        and [4] refers to number of elements INSIDE THOSE ARRAYS within array. (this numbers is neccesary to set.)
//
// does that make sense?
// lmao, not really. But right now it does.
// tho, if im going to read this 1 year later, it will be just some weird-ass nonsense.
// but who cares about things that will be 1 year later? WE ARE LIVING RIGHT NOW!

// 0.1 - declaration, the other way. (easies to look at, just formatting changes)
char a[3][5] = {
                 {'H', 'e', 'l', 'l', 'o'}, 
                 {'b', 'a', 'b', 'e', 'y'}, 
                 {'a', 'b', 'c', 'd', 'e'}
               };

// 0.2 - declaration, the third way.
int grid[5][3]; 

grid[0][0] = 1;
grid[0][1] = 2;
grid[0][2] = 3;
grid[1][0] = 4;
grid[1][1] = 5;
grid[1][2] = 6;
grid[2][0] = 7;
grid[2][1] = 8;
grid[2][2] = 9;
grid[3][0] = 10;
grid[3][1] = 11;
grid[3][2] = 12;
grid[4][0] = 13;
grid[4][1] = 14;
grid[4][2] = 15;

// all ways are valid, just use the one u need for ur job.


int rowz = sizeof(grid)/sizeof(grid[0]); // sooo this is... mathemagics! u take total size, and.. then..
                                         // something happens! it just calculates!

int columnz = sizeof(grid[0])/sizeof(grid[0][0]); // this is too, mathemagics!


printf("\nrows: %d", rowz);
printf("\ncolumns: %d\n\n", columnz);

// 1 - main body
// how do we show the 2D array? welp, using nested loop.
// a loop within loop


for (int index = 0; index < rowz; index = index + 1)
{

    for(int jdex = 0; jdex < columnz; jdex++)
    {
    printf("%d ", grid[index][jdex]);
    }

printf("\n"); // adds a space after each row
}







// 99 - end.

//////////////////////
//////////////////////
//////////////////////
return 0;
}