/* 编写一段程序读入两个字符串，比较其是否相等并输出结果，如果不相等，输出较大的那个字符串。
改写上述程序，比较输入的两个字符串是否等长，输出长度较长大的那个字符串。 */
#include <iostream>
#include <string>

using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2) 
        cout << "s1 = s2" << endl;
    else if(s1 < s2)
        cout << "s2 is larger: " << s2 <<endl;
    else
        cout << "s1 is larger: " << s1 <<endl;
    if(s1.size() == s2.size()) 
        cout << "s1.size = s2.size" << endl;
    else if(s1.size() < s2.size())
        cout << "s2 is longer: " << s2 <<endl;
    else
        cout << "s1 is longer: " << s1 <<endl;
}