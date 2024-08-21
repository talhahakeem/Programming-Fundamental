#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    int g;
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            g = i;
        }
    }
    return g;
}
int main()
{
    int n, m;
    cout << "Enter the Two Integers: ";
    cin >> n >> m;
    cout << "Gcd of two integers is : " << gcd(n, m);

    return 0;
}