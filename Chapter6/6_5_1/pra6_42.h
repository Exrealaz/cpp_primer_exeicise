/**
 * 给 make_plural 函数的第二个形参赋予默认实参 's'，利用新版本的函数输出单词 success 和 failure 的单数和复数形式。
*/
#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}