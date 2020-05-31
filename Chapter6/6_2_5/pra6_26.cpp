/**
 * 编写一个程序，使其接受本节所示的选项；输出传递给 main 函数的实参的内容。
**/
#include <iostream>
int main(int a1, char **v2)
{
    std::cout << a1 << std::endl;
    for(int i = 0; i != a1; ++i)
        std::cout << v2[i] << std::endl;
    return 0;
}