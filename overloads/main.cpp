#include <iostream>

// To set up a valid overload you need to change the argument types of the function
// the return type is not enough to make it a valid overload
// the compiler will complain about the redefinition of the function
// also a different number of arguments is enough to make it a valid overload

int max(int a, int b)
{
    std::cout << "int max" << std::endl;
    return a > b ? a : b;
}

int max(int a, int b, int c)
{
    std::cout << "int max with 3" << std::endl;
    return a > b ? a : b;
}

double max(double a, double b)
{
    std::cout << "double max" << std::endl;
    return a > b ? a : b;
}

std::string max(std::string a, std::string b)
{
    std::cout << "string max" << std::endl;
    return a > b ? a : b;
}

int main()
{
    std::cout << max(1, 2) << std::endl;
    std::cout << max(1, 2, 3) << std::endl;
    std::cout << max(1.1, 2.2) << std::endl;
    std::cout << max("abc", "defd") << std::endl;

    return 0;
}