#include <iostream>
using namespace std;
void factorial(int n, int *result)
{
    *result = 1;
    for (int i = 1; i <= n; i++)
    {
        *result *= i;
    }
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    int result;
    factorial(num, &result);
    cout << "Factorial of " << num << " = " << result;
    return 0;
}
