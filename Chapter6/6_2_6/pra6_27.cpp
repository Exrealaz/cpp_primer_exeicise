/**
 * 编写一个函数，它的参数是 initializer_list<int> 类型的对象，函数的功能是计算列表中所有元素的和。
*/
#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> il)
{
    int result = 0;
    for(auto a : il)
        result += a;
    return result;
}
int main()
{
    std::cout << sum({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) << std::endl;
    return 0;
}