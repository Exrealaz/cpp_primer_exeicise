#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 正常结果
    std::cout << u - u2 << std::endl; // 0x0000 000a - 0x0000 002a = 0x0000 000a + 0xffff ffd6 = 4,294,967,264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 正常输出
    std::cout << i - i2 << std::endl; // 正常输出
    std::cout << i - u << std::endl; // 0x0000 000a + 0xffff fff6 = 0x 1 0000 0000 = 0(unsigned)
    std::cout << u - i << std::endl; // 0x0000 000a + 0xffff fff6 = 0x 1 0000 0000 = 0(unsigned)
    std::cout << i - u2 << std::endl;
    std::cout << u - i2 << std::endl;
    return 0;
}