#include <iostream>
using namespace std;
int mul(int a, int b)
{
    if (b % a == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, r;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter the pair of integers: ";
        cin >> a >> b;
        r = mul(a, b);
        if (r == 1)
        {
            cout << b << " is Multiple of " << a;
        }
        else
        {
            cout << b << " is not Multiple of " << a << endl;
        }
    }

    return 0;
}