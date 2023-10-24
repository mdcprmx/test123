#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    // logical operators = && (AND). it checks for two conditions to be true.
    //                     All conditions must be true, if even one condition
    //                     is false then it will consider whole operation false. 


    // practicing programm for imitating usual Job application
    // that checks for ALL conditions to be true, only then applicant will be hired.


    // 1 - declaration
    char engineering_degree;
    char stress_resistant;
    char threeD_modeling_expirience;
    
    // 2 - user input
    printf("\nHello, you are applying for a job in \"SUPA DUPA COOL FURNITURE COMPANY\", ");
    printf("we would like to ask you some questions before making our decision.\n");
    printf("\nPlease, answer ONLY using (y) or (n) single symbols.\n");

    // !!IMPORTANT!! these SPACEs before %c are IMPORTANT! don't delete them!
    //               or programm will skip most of SCANF operations. Why? Google it.

    printf("\nQuestion one:\nDo you have an engineering degree?\n");
    scanf(" %c", &engineering_degree);  // input 1

    printf("\nQuestion two:\nAre you stress resistant?\n");
    scanf(" %c", &stress_resistant); // input 2

    printf("\nQuestion three:\nDo you have any 3D modeling expirience?\n");
    scanf(" %c", &threeD_modeling_expirience); // input 3

    // 2.1 - converts user input to UPPER CASE
    engineering_degree = toupper(engineering_degree);
    stress_resistant = toupper(stress_resistant);
    threeD_modeling_expirience = toupper(threeD_modeling_expirience);

    // 3 - main body
    // remember that u need to use [==], not just single [=]. Took me a day to realize that
    // cuz ur asking program for EXACT value (in this scenario 'Y')
    if(engineering_degree == 'Y' && stress_resistant == 'Y' && threeD_modeling_expirience == 'Y'){
        printf("\nYou are fully compatible with our company! Our HR manager will contact you soon.\n");
    }

    else if(engineering_degree == 'N' && stress_resistant == 'N' && threeD_modeling_expirience == 'N') {
        printf("\nSorry, you are not qualitified enough to work at our SUPERIOR company.\n");
    }

    else
    {
        printf("\nSorry, you are not good enough for our company. We are looking for the BEST of THE BEST!\n");
    }



    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}