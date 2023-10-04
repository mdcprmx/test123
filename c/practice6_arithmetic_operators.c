#include <stdio.h>

int main (){

    // arithmetic operators

    //  +  (addition)
    //  -  (subtraction)
    //  *  (multiplication)
    //  /  (division)
    //  %  (modulus)
    //  ++ (incriment)
    //  -- (decrement)

    // Section 1 - declaration:
    int iks = 5;
    int igrek = 3;

    // Section 2 - calculations:
    int res_addition = iks + igrek;
    printf("\nAddition result: %d\n\n", res_addition);
    
    int res_subtraction = iks - igrek;
    printf("Subtraction result: %d\n\n", res_subtraction);

    int res_multiplication = iks * igrek;
    printf("Multiplication result: %d\n\n", res_multiplication);

    int res_division = iks / igrek;
    printf("Division result: %d (as integer)\n\n", res_division); // it should be float tho, but whatever.
    
 //    (float) is a diviser. or adviser?                //               //
    // anyway, you can add this DIVISER thingie
    // instead of declaring variable as FLOAT.
    // but result variable must still be FLOAT type.
    float res_division2 = iks / (float) igrek;                                       
    printf("Division result: %.2f (with diviser and as float)\n\n", res_division2);
 //                //                //                //                //                //

    int res_modulus = iks % igrek;
    printf("What is this? MODULUS?!.. anyway, modulus result: %d\n\n", res_modulus);

    




    return(0);
}