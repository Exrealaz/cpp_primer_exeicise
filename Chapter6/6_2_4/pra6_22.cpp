/*
编写一个函数，令其交换两个 int 指针。
*/
#include <iostream>
void swap(int *a, int *b)
{
    int *t;
    t = a; a = b; b = t;
}

int main()
{
    int a = 1, b = 2;
    swap(&a, &b);
    std::cout << a << " "<< b << std::endl;
    return 0;
}