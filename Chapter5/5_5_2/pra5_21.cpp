/*
修改 5.5.1 节的练习题程序，实习找到重复的单词必须以大写字母开头
*/
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
    string s1, s2;
    bool flag = false;
    cin >> s2;
    while (cin >> s1)
    {
        if (s1[0] != toupper(s1[0]))
            continue;
        if(s1 == s2)
        {
            cout << "\n连续重复出现的单词: " << s1 << endl;
            flag = true;
            break;
        }
        else
            s2 = s1;
    }
    if (!flag)
        cout << "\n没有任何单词是连续重复出现的" << endl;
    return 0;
}