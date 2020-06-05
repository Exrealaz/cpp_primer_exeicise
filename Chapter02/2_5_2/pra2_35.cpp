/*判断下列定义推断出的类型是什么，然后编写程序进行验证 */
#include <iostream>

int main()
{
    const int i = 42;
    auto j = i; // j is an int variable with value 42
    const auto &k = i; // i is an int& reference bound to i
    auto *p = &i; // p is an int* point to i
    const auto j2 = i, &k2 = i; // j2 is an const int variable with value 42, and k2 is an int& reference bound to i
    std::cout << "j: " << j << std::endl; 
    std::cout << "k: " << k << std::endl; 
    std::cout << "p: " << p << std::endl; 
    std::cout << "j2: " << j2 << std::endl; 
    std::cout << "k2: " << k2 << std::endl; 
    std::cout << "k equales k2? " << (k == k2) << std::endl; 
    return 0;
}