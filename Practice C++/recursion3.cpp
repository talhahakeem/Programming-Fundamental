#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, result;
    cout << "Enter the number :";
    cin >> n;
    result = fibonacci(n);
    cout << n << "th Fibonacci number is : " << result;

    return 0;
}