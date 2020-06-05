/*
请使用迭代器重做3.3.3节的最后一个练习（练习3.20）。
*/
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    //vector<int> ivec1;
    //for(int i; cin >> i; ivec1.push_back(i));
    //for(auto i = ivec1.begin(); i != ivec1.end() - 1; ++i)
    //    cout << *i + *(i+1) <<endl;
    vector<int> ivec2;
    for(int i; cin >> i; ivec2.push_back(i));
    for (auto i = ivec2.begin(), j = ivec2.end() - 1; i != ivec2.end(); ++i, --j)
        cout << *i + *j << endl; 
    return 0;
}