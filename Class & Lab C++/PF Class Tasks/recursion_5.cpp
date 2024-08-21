#include <iostream>
using namespace std;
int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n, result;
    cout << "Enter the number for which you want to find fibonacci number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}