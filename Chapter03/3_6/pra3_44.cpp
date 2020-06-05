/*
改写上一个练习中的程序，使用类型别名来代替循环控制变量的类型。
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
    using int4 = int[4];
    //v1
    for (int4 &row : ia)
        for(int col : row)
            cout << col << " ";
    cout << endl;
    //v2
    for (size_t i = 0; i != 3; ++i)
        for(size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;
    //v3
    for (int4 (*p) = ia; p != ia + 3; ++p)
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    cout << endl;
    return 0;
}