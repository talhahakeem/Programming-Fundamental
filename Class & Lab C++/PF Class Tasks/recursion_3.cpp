#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = sum(n - 1);
    return n + prevsum;
}
int main()
{
    int n, result;
    cout << "Enter the Number Till you want to find Sum: ";
    cin >> n;
    result = sum(n);
    cout << "Sum from 1 to till " << n << " is : " << result;

    return 0;
}