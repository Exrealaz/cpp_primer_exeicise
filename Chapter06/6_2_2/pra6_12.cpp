/*
改写 6.2.1 节中联系 6.10 的程序，使用引用而非指针交换两个整数的值。你觉得哪种方法更易于使用呢？为什么？
*/
#include <iostream>
void swap(int &a, int &b)
{
    a ^= b ^= a ^= b;
}
int main()
{
    int a = 0, b = 1;
    swap(a, b);
    std::cout << "a = " << a << "\tb = " << b << std::endl;
    return 0;
}