#include <iostream>

/* Typkonverteringar, unsigner kan inte vara mindre än 0 ( se rad 2),
Ett värde som exempelvis 42 kallas literal då det är självmedvetet.
Kan utrtryckas på olika form:
20; decimal; 024 octal; 0x14 hexadecimal; */

/* -- SKUMMA GREJER --
 En variabel specificerar storlek och datatyp som skall lagras.
 The word nullptr is a pointer literal.
 Initiering och tillderlning är olika i C++
 Initialization happens when a variable is given a value when it is created.
 Assignment obliterates an object’s current value and replaces that value with a new one.
 */
int reused = 42; // Global scope
int main()
{
    int unique = 0; // Block scope
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    //references 
    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival måste initieras
   

    int j = 100, sum = 0; // j Skrivs över så fort den tilldelas 0; 

    for (int j = 0; j != 10; ++j) {
        sum += j;
    std::cout << j << " " << sum << std::endl;
    }
    return 0;
}