#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main() {
    
    srand (time(NULL));
    int b = 0;
    int a = -50 + b%101;

    printf("\n%d\n", a);


    return 0;
}

