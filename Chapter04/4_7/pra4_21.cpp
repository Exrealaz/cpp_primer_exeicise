/*
编写一段程序，使用条件运算符从 vector<int> 中找到哪些元素的值是奇数，然后将这些奇数值翻倍。
*/
#include <iostream>
#include <vector>
using std::vector;
int main()
{
    vector<int> i = {1, 2, 3, 4, 4, 5, 6, 7, 8, 8, 9};
    for(auto &a : i)
    {
        a = a % 2 == 1 ? a * 2 : a;
        std::cout << a << " ";
    }
    return 0;
}