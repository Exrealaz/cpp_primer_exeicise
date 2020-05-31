/*
编写一段程序，用整型数组初始化一个 vector 对象。
*/
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    int arr[] = {6,1,8,6,5,1,6,3};
    std::vector<int> ivec(std::begin(arr), std::end(arr));
    for (auto i = ivec.begin(); i != ivec.end(); ++i)
        std::cout << *i << " ";
    return 0;
}