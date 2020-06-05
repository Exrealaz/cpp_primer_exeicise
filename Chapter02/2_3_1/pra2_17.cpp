/*
执行下面的代码段将会输出什么结果？
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
*/
#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl; // Output will be:10 10
    return 0;
}