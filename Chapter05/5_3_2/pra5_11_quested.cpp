/*
修改统计元音字母的程序，使其也能统计空格、制表符和换行符的数量。
为什么空格、制表符和换行符的数量无法统计？
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tableCnt = 0, returnCnt = 0, otherCnt =0;
    char ch;
    while (cin >> ch)
    {
        //ch = tolower(ch);
        switch (ch)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tableCnt;
                break;
            case '\n':
                ++returnCnt;
                break;
            default:
                ++otherCnt;
                break;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of table: \t" << tableCnt << '\n'
         << "Number of space: \t" << spaceCnt << '\n'
         << "Number of return: \t" << returnCnt << '\n'
         << "Number of other letter: \t" << otherCnt << endl;
    return 0;
}