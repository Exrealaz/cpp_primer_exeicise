//下面的程序合法吗？如果合法，它将输出什么
/*
int i = 100, sum = 0;
for(int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
*/
#include <iostream>

int main()
{
    int i = 100, sum = 0;
    for(int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    // output: 100 45
    return 0;
}