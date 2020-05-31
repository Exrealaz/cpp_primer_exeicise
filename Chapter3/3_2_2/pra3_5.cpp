/* 编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。
然后修改上述程序，用空格把输入的多个字符串分隔开来 */
#include <iostream>
#include <string>

using std::cin;
using std::cout; using std::endl;
using std::string;

int main ()
{
    string s1;
    cin >> s1;
    if (!s1.empty())
    {
        string t;
        while (cin >> t)
        {
            if (!t.empty())
            {
                //s1 += t;
                s1 += " ";
                s1 += t;
            }
            cout << "s1: " << s1 << endl;
        }
    }
}