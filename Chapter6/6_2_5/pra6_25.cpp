/*
编写一个 main 函数，令其接受两个实参。把实参的内容连接成一个 string 对象并输出出来。
*/
#include <iostream>
#include <string>

main(int a, char *str[])
{
    std::string s = "";
    for(int i = 0; i != a; ++i)
        s += str[i];
    std::cout << s << std::endl;
    return 0;
}