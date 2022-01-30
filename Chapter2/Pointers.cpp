#include <iostream>

// Uninitialized pointers are a common source of run-time errors.

int main () { 

    int*ip1,*ip2; // both ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double; dp is a double


    int ival = 42;
    int *p = &ival; // p pekar på ivals adress 
    std::cout<< *p;

    return 0; 
}