/*
修改统计元音字母的程序，使其能统计以下含有两个字符的字符序列的数量：
ff、fl 和 fi。
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt =0, otherCnt =0;
    char ch;
    while (cin >> ch)
    {
        ch = tolower(ch);
        switch (ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            case 'f':
                {
                    char c;
                    cin >> c;
                    switch (c)
                    {
                        case 'f':
                            ++ffCnt;
                            break;
                        case 'l':
                            ++flCnt;
                            break;
                        case 'i':
                            ++fiCnt;
                            break;
                        case 'a':
                            ++aCnt;
                            ++otherCnt;
                            break;
                        case 'e':
                            ++eCnt;
                            ++otherCnt;
                            break;
                        case 'o':
                            ++oCnt;
                            ++otherCnt;
                            break;
                        case 'u':
                            ++uCnt;
                            ++otherCnt;
                            break;
                        default:
                            otherCnt += 2;
                            break;
                    }
                }
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
         << "Number of ff: \t" << ffCnt << '\n'
         << "Number of fl: \t" << flCnt << '\n'
         << "Number of fi: \t" << fiCnt << '\n'
         << "Number of other letter: \t" << otherCnt << endl;
    return 0;
}