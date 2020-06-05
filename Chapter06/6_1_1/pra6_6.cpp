/*
说明形参、局部变量以及局部静态变量的区别。编写一个函数，同时用到这三种形式。
形参和函数体内定义的变量都是局部变量，它们会随函数调用而创建，调用结束而销毁；
局部静态变量在第一次调用定义它的函数时创建，并直到程序运行结束销毁。
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int demo(int a)
{
    cout << a << endl;
    int b = 4;
    static int c = 5;
    cout << ++c << endl;
    return b;
}
int main()
{
    int a = demo(1);
    cout << a << endl;
    int b = demo(2);
    cout << b << endl;
    return 0;
}