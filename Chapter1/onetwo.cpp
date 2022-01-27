#include <iostream> //in and out stream library to take in and out from command prompt
                    // The term stream is intended to suggest that the characters are generated, or consumed, sequentially over time.

/* this is a
comment over more than
one line
*/
int main()
{

    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    int sumWhile = 0, val = 1;
    while (val <= v2)
    {
        sumWhile += val;
        ++val; // Kan lika gärna stå val++ eller val =val+1;
    }

    int sumFor = 0;
    // sumvaluesfrom1through10inclusive
    for (int val = 1; val <= 10; ++val)
    {
        sumFor += val; // equivalenttosum=sum+val
    }

    std::cout << "Sum of 1 to " << v2 << " inclusive is " << sumWhile << std::endl;
    std::cout << "Sum of 1 to 10 inclusive is " << sumFor << std::endl;

    return 0;
}
/*
ERRORS
Syntax errors:
The programmer has made a grammatical error in the C++ language.
The following program illustrates common syntax errors; each comment describes the error on the following line:

Type errors:
Each item of data in C++ has an associated type. The value 10, for example, has a type of int (or, more colloquially, “is an int”).
The word "hello", including the double quotation marks, is a string literal.
One example of a type error is passing a string literal to a function that expects an int argument.

Declaration errors: Every name used in a C++ program must be declared before it is used. Failure to declare a name usually results in an error message.
The two most common declaration errors are forgetting to use std:: for a name from the library and misspelling the name of an identifier:


*/
