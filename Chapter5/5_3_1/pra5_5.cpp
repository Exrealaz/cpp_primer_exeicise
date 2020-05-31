/*
写一段自己的程序，使用 if else 语句实现把数字成绩转换成字幕成绩的要求。
*/
#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    string score;
    vector<string> grade = {"A", "B", "C", "D"};
    unsigned int point;
    bool flag = true;
    while(flag)
    {
        cout << "输入一个得分：" << endl;
        cin >> point;
        if (point < 60)
            score = "E";
        else if(point < 100)
        {
            score = grade[(99 - point) / 10];
            if (point % 10 < 3)
                score += "-";
            if (point % 10 > 7)
                score += "+";
        }
        else if (point == 100)
            score = "A++";
        else
            cout << "成绩错误" << endl;
        cout << "最终评分：" << score << endl;
        cout << "是否继续？（1/0：是/否）" << endl;
        cin >> flag;
    }
    
    return 0;
}