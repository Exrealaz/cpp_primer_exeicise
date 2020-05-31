/*
编写一段程序，比较两个 string 对象。再编写一段程序，比较两个 C 风格字符串的内容。
*/
#include <iostream>
#include <string>
#include <cstring>
#include <iterator>
using std::cout; using std::endl; using std::string; using std::begin; using std::end;

int main()
{
    string s1 = "aposidfjoasdijf", s2 = "aosddhgoadjf";
    cout << ((s1 == s2) ? "Equal" : "Not equal") <<endl;
    char a[] = "laskjdfo";
    char b[] = "laskjdfa";
    if(sizeof(a) != sizeof(b))
    {   
        cout << "Not equal" << endl;
        return 0;
    }
    else
    {
        auto p = begin(a), q = begin(b);
        while (p!= end(a) && q != end(b))
        {
            if(*p != *q)
            {
                cout << "Not equal" << endl;
                return 0;
            }
            ++p,++q;
        }  
    }
    cout << "Equal" << endl;
    return 0;
}