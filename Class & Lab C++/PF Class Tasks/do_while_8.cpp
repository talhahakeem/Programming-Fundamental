#include <iostream>
using namespace std;
int main()
{
    int a, b, c, r;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;
    c = 1;
    r = 1;
    do
    {
        r = r * a;
        c++;
    } while (c <= b);
    cout << "Result is:" << r;

    return 0;
}