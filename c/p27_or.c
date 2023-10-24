#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    // logical operators = || (OR) checks if at least ONE condition is true
    //                     

    // 1 - declaration
    // as long as at least one bool is true, printf with HAPPY will play out.
    bool wife = true;
    bool kids = false;
    bool car = false;
    bool job = true;

    // 2 - main body
    // code literally reads as "if u have wife, or kids, or a car, or at least u have a job, then ur happy!"
    // philosophically speaking, that's completely wrong tho. But i'm writing it for practice, so idc

    if(wife == true || kids == true || car == true || job == true){
    printf("\nHappy life! ur good!\n");
    }
    
    else{
        printf("\nSad lyfe, man..\n");
    }

    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}