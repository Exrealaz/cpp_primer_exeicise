/*
编写一个函数，当它第一次被调用时返回 0；以后每次被调用返回值加 1。
*/
#include <iostream>
int sta()
{
    static int i = 0;
    return i++;
}
int main()
{
    for (int j = 0; j != 5; ++j)
        std::cout << sta() << std::endl;
    return 0;
}
