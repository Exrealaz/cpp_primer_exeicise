/**
 * 将 6.2.2 节的 isShorter 函数改写成内联函数。
*/
#include <iostream>
#include <string>

inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}