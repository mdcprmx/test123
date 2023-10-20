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
    int iks = 27;
    int igrek = 13;

    printf("\nX = %d\nY = %d\n\n", iks, igrek);

    // Section 2 - calculations:
    int res_addition = iks + igrek;
    printf("Addition result: %d\n\n", res_addition);
    
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

    iks++;
    printf("Increment applied to X: %d\n\n", iks);
    iks--;
    printf("Decrement applied to X: %d\n\n", iks);
    iks--; iks--; iks--;
    printf("Decrement applied to X three times: %d\n\n", iks);

    // so basically Increment is literally "plus one". Simple.
    // and Decrement is basically "minus one". Even pre schoolers can understand that.

    // a-and what is modulus? idk. some fancy mathemagics

    return(0);
}