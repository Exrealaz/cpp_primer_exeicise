#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Please input two numbers a and b (a>b)." << endl;
    cin >> a >> b;
    cout << "Integers between a and b are :";
    while(a>=b)
    {
        cout << a << " ";
        --a;
    }
    return 0;
}
