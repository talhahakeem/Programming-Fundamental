#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    double sum = 1;
    cout << "Enter the maximum number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double term = 1.0 / fact(i);
        sum += term;
    }
    cout << "Sum series is : " << sum;

    return 0;
}