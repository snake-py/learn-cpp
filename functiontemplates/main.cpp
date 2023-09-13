#include <iostream>
#include <cstring>

template <typename T>
T max(T a, T b);
// specialization

// this modifies the original template <- so it can accept char * (pointers)
template <>
const char *max<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b)) > 0 ? a : b;
}

int main()
{
    std::cout << max(1, 2) << std::endl;
    std::cout << max<double>(1, 2) << std::endl;
    std::cout << max<double>(1.1, 2.1) << std::endl;
    std::cout << max<int>(1.1, 2.1) << std::endl; // you can pass any type, but it will be converted to the type you specified
    std::cout << max(1.0, 2.0) << std::endl;
    std::cout << max("1.0", "2") << std::endl;

    const char *a = "a";
    const char *b = "bc";
    std::cout << max(a, b) << std::endl;

    return 0;
}

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}