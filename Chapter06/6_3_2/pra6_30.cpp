/**
 * 编译第 200 页的 str_subrange 函数，看看你的编译器是如何处理函数中的错误的。
*/
#include <iostream>
bool str_subrange(const std::string &str1, const std::string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ?
                str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return;
    }
}
/*
pra6_30.cpp: In function ‘bool str_subrange(const string&, const string&)’:
pra6_30.cpp:14:13: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
             return;
             ^~~~~~
*/