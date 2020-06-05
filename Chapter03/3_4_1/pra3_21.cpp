/*
使用迭代器重做 3.3.3 节的第一个练习(练习3.16)。
*/
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
    vector<int> v1; //初始状态为空。
    vector<int> v2(10); //创建一个包含10个元素的 int 向量，并执行默认初始化。
    vector<int> v3(10, 42); //创建一个包含10个元素的 int 向量，它们所有的值都为42。
    vector<int> v4{10}; //列表初始化一个 int 向量，包含一个值为10的元素。
    vector<int> v5{10, 42}; //列表初始化一个 int 向量，包含2个元素,值分别为10，42。
    vector<string> v6{10}; // 列表初始化一个 string 向量，包含10个值为""的元素。
    vector<string> v7{10,"hi"}; // 创建一个包含10个元素的向量，它们所有的值都为"hi"。
    cout << "v1: " << endl;
    for(auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << endl;
    cout << "v2: " << endl;
    for(auto i = v2.begin(); i != v2.end(); ++i)
        cout << *i << endl;
    cout << "v3: " << endl;
    for(auto i = v3.begin(); i != v3.end(); ++i)
        cout << *i << endl;
    cout << "v4: " << endl;
    for(auto i = v4.begin(); i != v4.end(); ++i)
        cout << *i << endl;
    cout << "v5: " << endl;
    for(auto i = v5.begin(); i != v5.end(); ++i)
        cout << *i << endl;
    cout << "v6: " << endl;
    for(auto i = v6.begin(); i != v6.end(); ++i)
        cout << *i << endl;
    cout << "v7: " << endl;
    for(auto i = v7.begin(); i != v7.end(); ++i)
        cout << *i << endl;
    return 0;
}