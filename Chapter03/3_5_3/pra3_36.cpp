/*
编写一段程序，比较两个数组是否相等。再写一段程序，比较两个 vector 对象是否相等。
*/
#include <iostream>
#include <vector>
#include <iterator>
using std::vector; using std::cout; using std::endl; using std::begin; using std::end;

int main()
{
    //vector
    vector<int> a(10,2);
    vector<int> b(10,2);
    cout << ((a == b) ? "Equal" : "Not equal") << endl;
    //array
    int a[10] = {2,2,2,2,2,2,2,2,2,2};
    int b[10] = {2,2,2,2,2,2,2,2,2,3};
    if(sizeof(a) != sizeof(b))
    {   
        cout << "Not equal" << endl;
        return 0;
    }
    else
    {
        auto p = begin(a), q = begin(b);
        while (p!= end(a) && q != end(b))
        {
            if(*p != *q)
            {
                cout << "Not equal" << endl;
                return 0;
            }
            ++p,++q;
        }  
    }
    cout << "Equal" << endl;
    return 0;
}