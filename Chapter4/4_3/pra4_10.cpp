/*
为 while 循环写一个条件，使其从标准输入中读取整数，遇到 42 时停止
*/
#include <iostream>
using std::cin;
int main()
{
    int a;
    while(cin >> a && !(a == 42))
    {
        std::cout << a << std::endl;
    }
    return 0;
}