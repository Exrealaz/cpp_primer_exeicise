/*
3.14编写一段程序，用 cin 读入一组整数，。并把它们存入一个vector对象。
3.15改写上体的程序，不过这次读入的是字符串。
*/
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
    int i = 0; // 3.15改为string s;
    vector<int> ivec; // 3.15改为vector<string> ivec;
    while(cin >> i) // 3.15改为while(cin >> s)
    {
        ivec.push_back(i); // 3.15改为svec.push_back(s);
    }
    return 0;
}