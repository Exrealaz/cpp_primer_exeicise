/*
改写上一题的程序，使用条件运算符代替 if else 语句。
*/
#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    string score;
    vector<string> grade = {"A++", "A", "B", "C", "D"};
    unsigned int point;
    bool flag = true;
    while(flag)
    {
        cout << "输入一个得分：" << endl;
        cin >> point;
        score = (point < 60) ? "E" : grade[(109 - point) / 10];
        string addition;
        addition = (point % 10 > 7) ? "+" : (point % 10 < 3) ? "-" : ""; 
        //addition = (point % 10 < 3) ? "-" : ""; 
        //cout << addition << endl;
        score += (point < 60 || point == 100) ? "" : addition;
        cout << "最终评分：" << score << endl;
        cout << "是否继续？（1/0：是/否）" << endl;
        cin >> flag;
    }
    
    return 0;
}