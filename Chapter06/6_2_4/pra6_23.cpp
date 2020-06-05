/*
参考本节介绍的几个 print 函数，根据理解编写你自己的版本。依次调用每个函数使其输入下面定义的 i 和 j：
    int i = 0, j[2] = {0, 1};
*/
#include <iostream>
#include <iterator>
using std::cout; using std::endl; using std::begin; using std::end;
void print(int i)
{
    cout << i << endl;
}
void print(const int *beg, const int *end)
{
    while (beg != end)
    {
        cout << *beg++ << " ";
    } 
    cout << endl;
}
int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(begin(j), end(j));
    return 0;
}
