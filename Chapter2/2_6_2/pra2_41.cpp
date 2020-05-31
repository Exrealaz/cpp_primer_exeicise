/* 使用你自己的 Sales_data 类重写1.5.1节、1.5.2节和1.6节的练习。眼下先把 Sales_data 的定义和 main 函数放在同一个文件里 */
#include <iostream>
#include <string>

struct Sales_data {
    std::string isbn;
    int sold_out = 0;
    double price = 0;
    double revenue = 0;
};

int main()
{
    /* pra1.21
    Sales_data s1, s2;
    std::cout << "Please input tow Sales_data items: \ns1:\n";
    std::cin >> s1.isbn >> s1.price >> s1.sold_out;
    std::cout << "s2:" << std::endl;
    std::cin >> s2.isbn >> s2.price >> s2.sold_out;
    s1.revenue = s1.price * s1.sold_out;
    s2.revenue = s2.price * s2.sold_out;
    if (s1.isbn == s2.isbn)
    {
        std::cout << "ISBN: " << s1.isbn << "\nRevenue:" << s1.revenue + s2.revenue << std::endl;
    }
    else std::cout << "These itmes' ISBNs are different!" << std::endl; */

    /* pra1.22 
    Sales_data s1, s2;
    std::cin >> s2.isbn >> s2.price >> s2.sold_out;
    s2.revenue = s2.price * s2.sold_out;
    while (std::cin >> s1.isbn >> s1.price >> s1.sold_out)
    {
        if (s1.isbn == s2.isbn)
        {
            s1.revenue = s1.price * s1.sold_out;
            s2.revenue += s1.revenue;
        }
        else std::cout << "ISBN does not match!" << std::endl;
        std::cout << "ISBN: " << s2.isbn << "Revenue: " << s2.revenue << std::endl;
    }
    */
    /* pra1.23 & pra1.24
    int count = 1;
    Sales_data s1, s2;
    std::cin >> s2.isbn >> s2.price >> s2.sold_out;
    std::cout << "ISBN: " << s2.isbn << " Counts: " << count << std::endl;
    s2.revenue = s2.price * s2.sold_out;
    while (std::cin >> s1.isbn >> s1.price >> s1.sold_out)
    {
        if (s1.isbn == s2.isbn)
        {
            count++;
            std::cout << "ISBN: " << s2.isbn << " Counts: " << count << std::endl;
        }
        else
        {
            s2 = s1;
            count = 1;
            std::cout << "ISBN: " << s2.isbn << " Counts: " << count << std::endl;
        }
    } */
    /* pra1.25 */
    Sales_data s2;
    if (std::cin >> s2.isbn >> s2.price >> s2.sold_out)
    {
        s2.revenue = s2.price * s2.sold_out;
        Sales_data s1;
        while (std::cin >> s1.isbn >> s1.price >> s1.sold_out)
        {
            if (s1.isbn == s2.isbn)
            {
                s1.revenue = s1.price * s1.sold_out;
                s2.revenue += s1.revenue;
                std::cout << "ISBN: " << s2.isbn << " Revenue: " << s2.revenue << std::endl;
            }
            else
            {
                s2 = s1;
                std::cout << "ISBN: " << s2.isbn << " Revenue: " << s2.revenue << std::endl;
            } 
        }
    }
    return 0;
}