/*
编写一段程序，创建一个含有10个整数的 vector 对象，然后使用迭代器将所有元素的值都变成原来的两倍。
输出 vection 对象的内容，检验程序是否正确。
*/
#include <iostream>
#include <vector>

using std::cout; using std::endl; using std::vector;

int main()
{
    vector<int> ivec(10,20);
    for(auto i = ivec.begin(); i != ivec.end(); ++i)
    {   
        *i *= 2;
        //cout << *i << " ";
    }
    for(auto i = ivec.begin(); i != ivec.end(); ++i)
        cout << *i << " ";
    return 0;
    }