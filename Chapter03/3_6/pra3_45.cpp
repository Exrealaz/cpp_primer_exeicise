/*
再次改写程序，这次使用 auto 关键字。
*/
#include <iostream>
using std::cout; using std::endl;
int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    //v1
    for (auto &row : ia)
        for(auto col : row)
            cout << col << " ";
    cout << endl;
    //v2
    for (size_t i = 0; i != 3; ++i)
        for(size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;
    //v3
    for (auto p = ia; p != ia + 3; ++p)
        for(auto q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    cout << endl;
    return 0;
}