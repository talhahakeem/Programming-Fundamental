#include <iostream>
using namespace std;
int pow(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevpow = pow(n, p - 1);
    return n * prevpow;
}
int main()
{
    int n, p;
    cout << "Enter the value 0f base:  ";
    cin >> n;
    cout << "Enter the value of power:  ";
    cin >> p;
    cout << "Answer of entered power and base is : ";
    cout << pow(n, p);
    return 0;
}