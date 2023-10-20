#include <stdio.h>
#include <ctype.h>     // for [toupper] functionale

int main() {

    // 1 - declaration
    char unit;
    double temp;

    // 2 - user input
    printf("\nIs the temperature in (F)arenheit or (C)elsius?: ");
    scanf("%c", &unit);           // user input 1
    
    // 3 - convert unit to upper case
    unit = toupper(unit);

    ////////////////////////
    //                    //
    ////////////////////////

    // 4.0 - first condition
    if (unit == 'C'){
    printf("\nNow, please enter the temperature in Celsius: ");
    scanf("%lf", &temp);           // user input 2
    temp = (temp * 9 / 5) + 32;    // convert calculation
    printf("\nConvert from Celsius to Farenheit result: %.1lf\n", temp);
    }

    // 4.1 - second condition
    else if (unit == 'F'){
    printf("\nNow then, pls enter the temperature in Farenheit: ");
    scanf("%lf", &temp);           // user input 2
    temp = ((temp -32) * 5) / 9;   // convert calculation
    printf("\nConvert from Farenheit to Celsius result: %.1lf\n", temp);
    }

    // 4.2 - final ELSE. If user inputs wrong unit measurement.
    else{
    printf("\n\"%c\" is invalid unit measurement, please type either F or C\n", unit);    
    }
    
return 0;
}