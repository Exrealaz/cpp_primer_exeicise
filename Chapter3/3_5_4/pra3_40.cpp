/*
编写一个程序，定义两个字符数组，并用字符串字面值初始化它们；接着再定义一个字符数组存放前两个数组连接后的结果。
使用 strcpy 和 strcat 把前两个数组的内容拷贝到第三个数组中。
*/
#include <iostream>
#include <cstring>

using std::string;

int main()
{
    char a[] = "aosifhpaod";
    char b[] = "aosdfih";
    char c[] = "";
    strcpy(c, a);
    strcat(c, b);
    std::cout << c << std::endl;
    return 0;
}