/*
写出一条表达式用于确定一个整数是奇数还是偶数
*/
#include <iostream>
int main()
{
    int a;
    std::cin >> a;
    std::cout << a % 2 << std::endl;
    return 0;
}