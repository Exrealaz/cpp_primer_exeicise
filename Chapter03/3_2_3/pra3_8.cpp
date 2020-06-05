#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

void traditional_for_loop(string &s) // Argument of string type is not a pointer;
{
    for(decltype(s.size()) i = 0; i != s.size(); ++i)
    {
        auto &c = s[i];
        c = 'X';
    }
}

void while_loop(string &s)
{
    decltype(s.size()) i = 0;
    while(i != s.size())
    {
        auto &c = s[i];
        c = 'X';
        ++i;
    }
}

int main()
{
    string s1 = "Hello World!", s2 = "Hello c++";
    traditional_for_loop(s1);
    while_loop(s2);
    cout << s1 << endl << s2 << endl;
    return 0;
}