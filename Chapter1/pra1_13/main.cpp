#include <iostream>

using namespace std;

int main()
{
    //pratice 1.9
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    cout << "The sum of 50 to 100 is: " << sum << endl;
    //practice 1.10
    sum = 0;
    for (int i = 10; i <=0; --i)
        sum += i;
    cout << "The sum of 10 to 0 is: " << sum << endl;
    //practice 1.11
    int a,b;
    sum = 0;
    cout << "Please input two numbers a and b (a > b)" << endl;
    cin >> a >> b;
    for (int i = a; i >= b; --i)
        sum += i;
    cout << "The sum of numbers between " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
