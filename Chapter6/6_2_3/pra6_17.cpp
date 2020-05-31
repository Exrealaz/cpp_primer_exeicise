/*
编写一个函数，判断 string 对象中是否含有大写字母。编写另一个函数，把 string 对象全都改写成小写形式。
在这两个函数中你使用的形参类型相同吗？为什么？
*/
#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

bool upper_exist(const string& s)
{
    for(auto ch : s)
        if(ch == toupper(ch))
            return true;
    return false;
}

void to_lower(string& s)
{
    for(auto& ch : s)
        ch = tolower(ch);
}

int main()
{
    string s;
    cin >> s;
    cout << upper_exist(s) << endl;
    to_lower(s);
    cout << s << endl;
    return 0;
}