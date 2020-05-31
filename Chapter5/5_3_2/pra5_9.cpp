/*
编写一段程序，使用一系列 if 语句统计冲 cin 读入的文本中有多少元音字母。
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt =0;
    char ch;
    while (cin >> ch)
    {
        if (ch == 'a')
            ++aCnt;
        else if (ch == 'e')
            ++eCnt;
        else if (ch == 'i')
            ++iCnt;
        else if (ch == 'o')
            ++oCnt;
        else if (ch == 'u')
            ++uCnt;
        else
            ++otherCnt;
    }
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of other letter: \t" << otherCnt << endl;
    return 0;
}