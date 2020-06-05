/*
3.31 编写一段程序，定义一个含有 10 个 int 的数组，令每个元素的值就是其下标值。
3.32 将上一题刚刚创建的数组拷贝给另外一个数组。利用 vector 重写程序，实现类似功能。
*/
#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

int main()
{
    int a[10];
    for (size_t i = 0; i != 10; ++i)
    {    
        a[i] = i;
        //test
        //cout << a[i] << " ";
    }
    //3.32 数组
    int b[10];
    for (size_t i = 0; i != 10; ++i)
        b[i] = a[i];
    // 3.32 vector
    vector<int> iv1(10);
    for (auto i = iv1.begin(); i != iv1.end(); ++i)
        *i = i - iv1.begin();
    // 下面注释掉的都是测试
    /*for (auto i = iv1.begin(); i != iv1.end(); ++i)
        cout << *i << " ";
    cout << endl;*/
    vector<int> iv2(iv1);
    /*for (auto i = iv2.begin(); i != iv2.end(); ++i)
        cout << *i << " ";
    cout << endl;*/
    return 0;
}