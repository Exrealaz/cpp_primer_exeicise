#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
    string s = "Hello World!";
    for (auto &c : s)
        //if (isgraph(c)) // This line can be ingored. 
            c = 'X';
    cout << s << endl;
    return 0;
}