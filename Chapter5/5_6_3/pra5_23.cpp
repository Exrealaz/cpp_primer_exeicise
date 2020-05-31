/*
编写一段程序，从标准输入读取两个整数，输出第一个数除以第二个数的结果
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << static_cast<double>(a) / b << endl;
    return 0;
}