#include <iostream>
using namespace std;
int fact(int m)
{
    if (m > 1)
    {
        return m * fact(m - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n, r;
    cout << "Enter the number for which you wanty to find the factorial: ";
    cin >> n;
    r = fact(n);
    cout << r;
    return 0;
}