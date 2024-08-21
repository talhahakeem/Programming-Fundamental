#include <iostream>
using namespace std;
void max(int a, int b);
int main()
{
    int x, y;
    cout << "Enter the two numbers: ";
    cin >> x >> y;
    max(x, y);
    return 0;
}
void max(int a, int b)
{
    if (a > b)
    {
        cout << "Maximum number is : " << a;
    }
    else
    {
        cout << "Maximum number is : " << b;
    }
}