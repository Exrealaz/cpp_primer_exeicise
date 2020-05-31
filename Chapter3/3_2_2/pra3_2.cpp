/* 编写一段程序从标准输入中一次读取一整行，然后修改该程序使其一次读入一个词 */
#include <iostream>
#include <string>

using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
    string s1;
    /* 读取行
    while(getline(cin, s1))
    {
        cout << s1 <<endl;
    }
    */
    /* 读取列 */
    while(cin >> s1)
    {
        cout << s1 << endl;
    }
    return 0;
}
