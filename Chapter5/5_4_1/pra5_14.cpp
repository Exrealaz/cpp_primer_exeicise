/*
编写一段程序，从标准输入中读取若干 string 对象并查找连续重复出现的单词，所谓连续重复出现的意思是：一个单词后面紧跟着这个单词本身。
要求记录连续重复出现的最大次数以及对应的单词。如果这样的单词存在，输出重复出现的最大次数；
如果不存在，输出一条信息说明任何单词都没有连续出现过。例如，如果输入的是
    how now now now brown cow cow
那么输出应该表明单词 now 连续出现了 3 次。
*/
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string; //using std::vector; 

int main()
{
    string a, p, maxWord;
    unsigned count = 1, maxCnt = 1;
    cin >> p;
    while (cin >> a)
    {
        if (a == p)
        {
            ++count;
            if (count > maxCnt)
            {
                maxCnt = count;
                maxWord = a;
            }
                
        }
        else
        {
            count = 1;
            p = a;
        }
    }
    if (maxCnt == 1)
        cout << "没有重复单词。" << endl;
    else
        cout << "单词 " << maxWord << " 出现次数最多，为 " << maxCnt << " 次" << endl;
    return 0;
}