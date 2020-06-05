/*
修改你的程序，使得当第二个数是 0 时抛出异常。先不要设定 catch 子句，运行程序冰镇的为除数输入 0，康康会发生什么？
*/
#include <iostream>
#include <stdexcept>

using std::cin; using std::cout; using std::endl; using std::runtime_error;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    if(b == 0)
        throw runtime_error("除数不能为 0。");
    else
        cout << static_cast<double>(a) / b << endl;
    return 0;
}