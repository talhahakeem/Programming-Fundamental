// program that inputs an integer and displays the sum of its digits.
#include <iostream>
using namespace std;
int main()
{
    int a, x, r, sum;
    sum = 0;
    cout << "Enter an integer:";
    cin >> x;
    a = x;
    while (x != 0)
    {
        r = x % 10;
        if (r == 0)
            sum = sum + x;
        else
            sum = sum + r;
        x = x / 10;
    }
    cout << "The sum of digits of " << a << " = " << sum;
    return 0;
}