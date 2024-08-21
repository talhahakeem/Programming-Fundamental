#include <iostream>
using namespace std;
int sum(int n);
int main()
{
    int n, result;
    cout << "Enter the number till you want to find sum: ";
    cin >> n;
    result = sum(n);
    cout << "Sum =" << result;
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}