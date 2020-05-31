/*
编写一个函数输出其实参的绝对值。
*/
#include <iostream>
int abs(int i)
{
    return i < 0 ? -i : i;
}
int main()
{
    int a = 0;
    std::cin >> a;
    std::cout << abs(a) << std::endl;
    return 0;
}