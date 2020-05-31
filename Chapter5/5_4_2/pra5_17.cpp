/*
假设有两个包含整数的 vector 对象，编写一段程序，检验其中一个 vector 对象是否是另一个的前缀。
为了实现这一个目标对于两个不等长的 vector 对象，只需挑出长度较短的那个，把它的所有元素和另一个 vector 对象比较即可。
例如，如果两个 vector 对象的元素分别是 0、1、1、2 和 0、1、1、2、3、5、8，则程序返回的结果应该为真。
*/
#include <iostream>
#include <vector>

using std::cout; using std::endl; using std::vector;

int main()
{
    vector<int> v1 = {0, 1, 1, 2}, v2 = {0, 1, 1, 2, 3, 5, 8};
    auto i1 = v1.begin(), i2 = v2.begin();
    for (; i1!= v1.end() && i2 != v2.end(); ++i1, ++i2)
    {
        if(*i1 != *i2)
            break;
    }
    if (i1 == v1.end() || i2 == v2.end())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}