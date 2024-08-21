#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << "Enter the number for which you want to find the factorial: ";
    cin >> n;
    factorial(n);
    cout << "factorial of given number is: ";
    cout << factorial(n);
    return 0;
}