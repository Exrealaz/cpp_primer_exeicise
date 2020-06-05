/*
编写一段程序，使用 do while 循环重复地执行下述任务：首先提示用户输入两个 string 对象，然后挑出较短的那个并输出它。
*/
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
    string s1, s2;
    char ch;
    do
    {
        cout << "请输入两个字符串: " << endl;
        cin >> s1 >> s2;
        cout << "较短的字符串是：" << (s1.length() < s2.length() ? s1 : s2) << endl;
        cout << "是否继续？(y/n)" << endl;
        cin >> ch;
    } while (ch != 'n');
    
    return 0;
}