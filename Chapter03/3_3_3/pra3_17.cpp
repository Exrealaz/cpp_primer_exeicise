/*
从 cin 读入一组词，并把它们存入一个 vector 对象，然后设法把所有词都改写为大写形式。使出改变之后的结果，每个词占一行。
*/
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl; using std::vector; using std::string;

int main()
{
    string s;
    vector<string> svec;
    while(cin >> s)
    {
        svec.push_back(s);
    }
    for(auto s : svec)
    {
        for(auto c : s)
            cout << (char)toupper(c);//不能明白为什么这里不加强转我的编译器输出为相应字符对应的数字
        cout << endl;
    }
     return 0;   
}