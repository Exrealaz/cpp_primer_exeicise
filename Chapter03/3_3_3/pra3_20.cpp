/*
读入一组整数并把它们存入一个 vector 对象，将每对相邻整数的和输出出来。
改写你的程序，这次要求先输出第 1 个和最后 1 个元素的和，接着输出第 2 个和倒数第 2 个元素的和。
*/
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    vector<int> ivec1;
    for(int i; cin >> i; ivec1.push_back(i));
    for(decltype(ivec1.size()) i = 0; i < ivec1.size() - 1; ++i)
        cout << ivec1[i] + ivec1[i+1] <<endl;
    //vector<int> ivec2;
    //for(int i; cin >> i; ivec2.push_back(i));
    ///*for(decltype(ivec2.size()) i = 0, j = ivec2.size() - 1; i != j;)
    //{
    //    cout << ivec2[i] + ivec2[j] <<endl;
    //    ++i;
    //    --j;
    //}*/ 
    //for (decltype(ivec2.size()) i = 0; i < ivec2.size(); ++i)
    //    cout << ivec2[i] + ivec2[ivec2.size() - i - 1] << endl; 
    return 0;
}