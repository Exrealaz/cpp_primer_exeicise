#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl; using std::vector; using std::string;

int main()
{
    vector<int> v1; //初始状态为空。
    vector<int> v2(10); //创建一个包含10个元素的 int 向量，并执行默认初始化。
    vector<int> v3(10, 42); //创建一个包含10个元素的 int 向量，它们所有的值都为42。
    vector<int> v4{10}; //列表初始化一个 int 向量，包含一个值为10的元素。
    vector<int> v5{10, 42}; //列表初始化一个 int 向量，包含2个元素,值分别为10，42。
    vector<string> v6{10}; // 列表初始化一个 string 向量，包含10个值为""的元素。
    vector<string> v7{10,"hi"}; // 创建一个包含10个元素的向量，它们所有的值都为"hi"。
    /*cout << "v1: " << v1 << endl
         << "v2: " << v2 << endl
         << "v3: " << v3 << endl
         << "v4: " << v4 << endl
         << "v5: " << v5 << endl
         << "v6: " << v6 << endl
         << "v7: " << v7 << endl;*/
    cout << "v1: " << endl;
    for(auto i : v1)
        cout << i << endl;
    cout << "v2: " << endl;
    for(auto i : v2)
        cout << i << endl;
    cout << "v3: " << endl;
    for(auto i : v3)
        cout << i << endl;
    cout << "v4: " << endl;
    for(auto i : v4)
        cout << i << endl;
    cout << "v5: " << endl;
    for(auto i : v5)
        cout << i << endl;
    cout << "v6: " << endl;
    for(auto i : v6)
        cout << i << endl;
    cout << "v7: " << endl;
    for(auto i : v7)
        cout << i << endl;
    return 0;
}