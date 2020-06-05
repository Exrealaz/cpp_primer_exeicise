/*
修改上一题的程序，使用 try 语句块去捕或异常。
catch 子句应该为用户输出一条提示信息，询问其是否输入新数并重新执行 try 语句块的内容。
*/
#include <iostream>
#include <stdexcept>

using std::cin; using std::cout; using std::endl; using std::runtime_error;

int main()
{
    int a = 0, b = 0;
    while (cin >> a >> b)
    {
        try
        {
            if(b == 0)
                throw runtime_error("除数不能为 0。");
            else
                cout << static_cast<double>(a) / b << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what()
                 << "\n是否继续？(y/n)" << endl;
            char ch;
            cin >> ch;
            if (!cin || ch == 'n')
                break;
        }
    }
    return 0;
}