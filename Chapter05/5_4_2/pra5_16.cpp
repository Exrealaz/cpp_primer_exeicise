/*
while 循环特别适用于那种条件保持不变、反复执行操作的情况，例如，当未达到文件末尾时不断读取下一个值。
for 循环则更像是在按步骤进行迭代，它的索引值在某个范围内一次变化。
根据每种循环的习惯用法各自编写一段程序，然后分别用另一种循环改写。
如果只能使用一种循环，你倾向于使用哪种呢？为什么？
*/
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    //while 
    int i = 0;
    while (cin >> i)
    {
        cout << i << endl;
    }
    //for 
    vector<int> ivec(10,20);
    for (auto a = ivec.begin(); a != ivec.end(); ++a)
        cout << *a << " ";
    cout << endl;
    return 0;
}
/*
我更倾向于 for 语句，因为它功能强大，也很灵活。
*/