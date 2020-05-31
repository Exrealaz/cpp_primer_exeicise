/*
使用逗号运算符重写1.4.1节的while循环，使它不再需要块，观察改写之后的代码的可读性提高了还是降低了。
*/
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while(val <= 10)
        sum += val, ++val; // 可读性降低了
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}