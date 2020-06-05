/*
编写一段程序，将含有整数元素的 vector 对象拷贝个一个整型数组。
*/
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(5, 1);
    int a[5];
    for (auto i = 0; i != 5; ++i)
    {    
        a[i] = v[i];
        std::cout << a[i] << " ";
    }
    return 0;
}