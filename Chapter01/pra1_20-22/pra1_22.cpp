#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item s1, s2;
    std::cin >> s1;
    while(std::cin >> s2)
    {
        s1 += s2;
        std::cout << s1 << std::endl;
    }
    return 0;
}