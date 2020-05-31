/**
 * 改写 6.3.2 节练习中使用递归输出 vector 内容的程序，使其有条件的输出与执行过程有关的信息。
 * 例如，每次调用时输出 vector 对象的大小。分别在打开和关闭调试器的情况下编译并执行这个程序。
*/
#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    #ifndef NDEBUG
        cout << end - beg << endl;
    #endif
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