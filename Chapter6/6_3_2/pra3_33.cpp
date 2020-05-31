/**
 * 编写一个递归函数，输出 vector 对象的内容
 * */
#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if(beg != end)
    {
        cout << *beg << endl;
        print(++beg, end);
    }
}

void print(vector<int> v)
{
    print(v.begin(), v.end());
}

int main()
{
    vector<int> v1(10,10);
    print(v1);
    return 0;
}


