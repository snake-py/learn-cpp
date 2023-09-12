#include <iostream>
#include "compare.h"
// the pre-processor will copy and paste the contents of compare.h here
#include "operations.h"

int main()
{
    int maximum = max(124, 56);
    int minimum = min(124, 56);
    int result = incr_mult(4, 5);

    std::cout << maximum << std::endl;
    std::cout << minimum << std::endl;
    std::cout << result << std::endl;

    return 0;
}

// then the compiler will compile all cpp files and link them together
// inside the compare.cpp file, the compiler will see the function definition
// and will compile it into machine code
// in the linking step of the compilation process, the linker will see the function definition
// if the linker doesn't find the function definition, it will throw an error
// could look like this:
// ld: Undefined symbols for architecture x86_64: "_max(int, int)", referenced from: _main in main-5b9b9c.o
// different compilers will give different error messages