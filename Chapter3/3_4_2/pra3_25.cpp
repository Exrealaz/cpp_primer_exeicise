/*
3.3.3节（第93页）划分分数段的程序是使用下表运算符实现的，请利用迭代器改写程序，并实现完全相同的功能。
*/
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
    vector<unsigned> scores(11,0);
    auto i = scores.begin();
    unsigned grade;
    while(cin >> grade)
    {
        if(grade <= 100)
        {
            ++(*(i + grade / 10));
        }
    }
    //test
    /*i = scores.begin();
    for(int j = 0; i != scores.end(); ++j, ++i)
        cout << j*10 << ":" << *i << " ";*/
    return 0;
}