#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int a = 50;
    while(a<=100)
    {
        sum += a;
        ++a;
    }
    cout << "The sum of 50 to 100 is " << sum << endl;
    return 0;
}
