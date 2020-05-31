#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    a = 42; // assign a as 42, type: int 
    b = 42; // assign b as 42, type: int 
    c = 42; // assign c as 42, type: int
    d = 42; // errot: cannot assign an int value to a int* variable
    e = 42; // errot: cannot assign an int value to a int* variable
    g = 42; // errot: cannot assign an value to a const reference
    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "d:" << d << std::endl;
    std::cout << "e:" << e << std::endl;
    std::cout << "g:" << g << std::endl;
    return 0;
}