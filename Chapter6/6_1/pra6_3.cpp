/*
编写你自己的 fact 函数，上机检查是否正确。
*/
#include <iostream>

int fact(int i)
{
    int fact = 1, j = 1;
    while(j <= i)
    {
        fact *= j++;
    }
    return fact;
}
int main()
{
    int i = 0;
    std::cin >> i;
    //i = fact(i);
    std::cout << fact(i) << std::endl;
    return 0;
}