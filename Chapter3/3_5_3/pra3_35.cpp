/*
编写一段程序，利用指针将数组中的元素置为零。
*/
#include <iostream>

int main()
{
    int a[10] = {1,1,1,1,1,1,1,1,1,1};
    int* p = a;
    for(int i = 0; i != 10; ++i)
        p[i] = 0;
    return 0;
}