/*
修改之前那个输出 text 第一段的程序，首先把 text 的第一段全都改成大写形式，然后再输出它。
*/
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
    vector<string> text{"Join GitHub today","",
    "GitHub is home to over 40 million developers working together to host and review code, manage projects, and build software together."};
    for (auto i = text.begin(); i != text.end() && !i->empty(); ++i)
        /*for(auto &j : *i)
            //cout << (char)toupper(j);
            j = toupper(j);
        */
        for(auto j = i->begin(); j != i->end(); ++j)
            *j = toupper(*j);
    for (auto i = text.begin(); i != text.end(); ++i)
        cout << *i << endl;
    return 0;
}