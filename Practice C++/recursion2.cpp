#include <iostream>
using namespace std;
int pow(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    int prevpow = pow(n, m - 1);
    return n * prevpow;
}
int main()
{
    int b, p, result;
    cout << "Enter the value of base: ";
    cin >> b;
    cout << "Enter the value of power: ";
    cin >> p;
    cout << "Answer of Entered Base and power is : " << pow(b,p);

    return 0;
}