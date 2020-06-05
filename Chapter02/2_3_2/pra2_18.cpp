/*编写代码分别更改指针的值以及指针所指对象的值 */
#include <iostream>

int main()
{
    int a = 0, b = 0;
    int *p1 = &a, *p2 = &b;
    p1 = &b; // p1现在指向b了
    p2 = &a; // p2现在指向a了
    *p1 = 3; // b = 3
    *p2 = 4; // a = 4
    std::cout << a << " " << b <<std::endl; // output:4 3
    return 0;
}