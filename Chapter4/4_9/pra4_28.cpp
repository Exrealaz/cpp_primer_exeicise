/*
编写一段程序，输出每一种内置类型所占空间的大小。
*/
#include <iostream>
using std::endl; using std::cout;
int main()
{
    int x[10];  int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl; // 输出 10
    cout << sizeof(p)/sizeof(*p) << endl; // 输出 1
    std::cout << "bool: "<< sizeof(bool) <<endl << "char: "<< sizeof(char) <<endl << "wchar_t: "<< sizeof(wchar_t) <<endl 
              << "char16_t: "<< sizeof(char16_t) <<endl << "char32_t: "<< sizeof(char32_t) <<endl 
              << "short: "<< sizeof(short) <<endl << "int: "<< sizeof(int) <<endl << "long: "<< sizeof(long) <<endl 
              << "long long: "<< sizeof(long long) <<endl << "float: "<< sizeof(float) <<endl 
              << "double: "<< sizeof(double) <<endl << "long double: "<< sizeof(long double) <<endl 
              /*<< "void: "<< sizeof(void) */<<endl;

    return 0;
}