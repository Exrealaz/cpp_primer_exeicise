/*
编写一个与用户交互的函数，要求用户输入一个数字，计算机生成该数字的阶乘。在 main 函数中调用该函数。
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

void fact ()
{
    int i = 0, result = 1;
    bool flag = true;
    do
    {
        result = 1;
        cout << "请输入一个数字:" << endl;
        cin >> i;
        while (i != 1)
        {
            result *= i--;
        }
        cout << "阶乘结果：" << result 
             <<"\n是否继续？（0/1：否/是）" << endl;
        cin >> flag;
    } while (flag);
    return;
}

int main()
{
    fact();
    return 0;
}