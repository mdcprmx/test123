#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = && (AND). it checks for two conditions to be true.
    //                     All conditions must be true, if even one condition
    //                     is false then it will consider whole operation false. 


    // practicing programm for imitating usual Job application
    // that checks for ALL conditions to be true, only then applicant will be hired.


    // 1 - declaration
    char professional_expirience;
    char engineering_degree;
    char analytical_thinking;
    char perception;
    char discipline;
    char punctuality;
    char responsible;
    char stress_resistant;
    char threeD_modeling_expirience;
    char furniture_assembly_expirience;
    
    // 2 - user input
    printf("\nHello, you are applying for a job in \"SUPA DUPA COOL FURNITURE COMPANY\", ");
    printf("we would like to ask you some questins before making our decision.\n");
    printf("\nPlease, answer ONLY using (y) or (n) single symbols.\n");

    // !!IMPORTANT!! these SPACEs before %c are IMPORTANT! don't delete them!
    //               or programm will skip most of SCANF operations. Why? Google it.

    printf("\nQuestion one:\nAre you familiar with this field?\n");
    scanf(" %c", &professional_expirience); // input 1

    printf("\nQuestion two:\nDo you have an engineering degree?\n");
    scanf(" %c", &engineering_degree);  // input 2

    printf("\nQuestion three:\nDo you think analytically?\n");
    scanf(" %c", &analytical_thinking); // input 3

    printf("\nQuestion four:\nAre you perceptive?\n");
    scanf(" %c", &perception); // input 4

    printf("\nQuestion five:\nAre you disciplined?\n");
    scanf(" %c", &discipline); // input 5
   
    printf("\nQuestion six:\nWill you never be late for work?\n");
    scanf(" %c", &punctuality); // input 6

    printf("\nQuestion seven:\nAre you responsible for your actions?\n");
    scanf(" %c", &responsible); // input 7

    printf("\nQuestion eight:\nAre you stress resistant?\n");
    scanf(" %c", &stress_resistant); // input 8

    printf("\nQuestion nine:\nDo you have any 3D modeling expirience?\n");
    scanf(" %c", &threeD_modeling_expirience); // input 9

    printf("\nQuestion ten:\nHave you assemled any furniture in your life?\n");
    scanf(" %c", &furniture_assembly_expirience); // input 10

    // 3 - main body
    if(){
        printf("");
        else if(){

        }
    }
    
    else{

        printf("You have entered the wrong symbol, please restart the program.");
        
    }



    // 99 - end

    ////////////////////////
    ////////////////////////
    ////////////////////////

return 0;
}