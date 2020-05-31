/*
编写并验证你自己的 reset 函数，使其作用于引用类型的参数。
*/
#include <iostream>
void reset (int &i)
{
    i = 0;
}
int main()
{
    int a = 4;
    reset(a);
    std::cout << a << std::endl;
    return 0;
}