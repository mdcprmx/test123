#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// function prototype
// what is it?
// It is a function declaration, without a body, and !!!BEFORE!!! main().
// mostly used as a failsafe, as a final check before running a programm.
// ensures that calls to a function are made with correct numbers and types of arguments.
//
// usually, it is used when you code functions after main.

void moshimosh(char[], int); // this is Function Prototype! for function written after main.

int main() 
{
    // 0 - declaration
    char name[] = "Antonio";
    int years_old = 56;

    // 1 - main body

    // moshimosh(name); // you can try to run this command, and it will execute, but with errors.
                        // so Function Prototype is used to prevent you from executing a broken code.

    moshimosh(name, years_old);


    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}

void moshimosh(char name[], int years_old)
{
    printf("\nHello %s", name);
    printf("\n%d years old you are!\n", years_old);
}

// -- IMPORTANT NOTES --
// 
//   Many C compilers do NOT check for parameters matching,
// that's why we are using Function Prototypes, to check for this.
//   Because if we don't check, and make a mistake, the programm will
// start behaving unexpectedly.
//
//  -- ADVANTAGES --
//  
//  1. Easier to navigate a program with main() at the top
//  2. Helps with debugging.
//  3. Commonly used in header files (what? watashi wa do not understando!.. for now)