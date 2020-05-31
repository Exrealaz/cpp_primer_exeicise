/*
编写一个函数，令其接受两个参数：一个是 int 型的数，另一个是 int 指针。
函数比较 int 的值和指针所指的值，返回较大的那个。在该函数中指针的类型应该是什么？
*/
#include <iostream>
int compare(int a, const int* b)
{
    return a > *b ? a : *b;
}
int main()
{
    int b = 1;
    std::cout << compare(0, &b) << std::endl;
    return 0;
}