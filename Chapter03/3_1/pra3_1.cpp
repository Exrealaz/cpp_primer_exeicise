/* 使用你自己的 Sales_data 类重写1.5.1节、1.5.2节和1.6节的练习。眼下先把 Sales_data 的定义和 main 函数放在同一个文件里 */
#include <iostream>
#include <string>

using std::cin;
using std::cout; using std::endl;
using std::string;

struct Sales_data {
    string isbn;
    int sold_out = 0;
    double price = 0;
    double revenue = 0;
};

int main()
{
    /* pra1.21
    Sales_data s1, s2;
    cout << "Please input tow Sales_data items: \ns1:\n";
    cin >> s1.isbn >> s1.price >> s1.sold_out;
    cout << "s2:" << endl;
    cin >> s2.isbn >> s2.price >> s2.sold_out;
    s1.revenue = s1.price * s1.sold_out;
    s2.revenue = s2.price * s2.sold_out;
    if (s1.isbn == s2.isbn)
    {
        cout << "ISBN: " << s1.isbn << "\nRevenue:" << s1.revenue + s2.revenue << endl;
    }
    else cout << "These itmes' ISBNs are different!" << endl; */

    /* pra1.22 
    Sales_data s1, s2;
    cin >> s2.isbn >> s2.price >> s2.sold_out;
    s2.revenue = s2.price * s2.sold_out;
    while (cin >> s1.isbn >> s1.price >> s1.sold_out)
    {
        if (s1.isbn == s2.isbn)
        {
            s1.revenue = s1.price * s1.sold_out;
            s2.revenue += s1.revenue;
        }
        else cout << "ISBN does not match!" << endl;
        cout << "ISBN: " << s2.isbn << "Revenue: " << s2.revenue << endl;
    }
    */
    /* pra1.23 & pra1.24
    int count = 1;
    Sales_data s1, s2;
    cin >> s2.isbn >> s2.price >> s2.sold_out;
    cout << "ISBN: " << s2.isbn << " Counts: " << count << endl;
    s2.revenue = s2.price * s2.sold_out;
    while (cin >> s1.isbn >> s1.price >> s1.sold_out)
    {
        if (s1.isbn == s2.isbn)
        {
            count++;
            cout << "ISBN: " << s2.isbn << " Counts: " << count << endl;
        }
        else
        {
            s2 = s1;
            count = 1;
            cout << "ISBN: " << s2.isbn << " Counts: " << count << endl;
        }
    } */
    /* pra1.25 */
    Sales_data s2;
    if (cin >> s2.isbn >> s2.price >> s2.sold_out)
    {
        s2.revenue = s2.price * s2.sold_out;
        Sales_data s1;
        while (cin >> s1.isbn >> s1.price >> s1.sold_out)
        {
            if (s1.isbn == s2.isbn)
            {
                s1.revenue = s1.price * s1.sold_out;
                s2.revenue += s1.revenue;
                cout << "ISBN: " << s2.isbn << " Revenue: " << s2.revenue << endl;
            }
            else
            {
                s2 = s1;
                cout << "ISBN: " << s2.isbn << " Revenue: " << s2.revenue << endl;
            } 
        }
    }
    return 0;
}