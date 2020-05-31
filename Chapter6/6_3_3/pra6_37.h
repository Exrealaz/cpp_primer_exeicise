/**
 * 为上一题的函数在写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用 decltype 关键字。你觉得那种形式最好？为什么？
*/
#include <iostream>

using str10 = std::string[10];

str10 &f1();

auto f2() -> std::string (&)[10];

std::string a[10];
decltype(a) &f3();