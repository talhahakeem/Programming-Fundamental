#include <iostream>
using namespace std;
int factorial(int *num)
{
    if (*num == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= *num; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(&n) << endl;
    return 0;
}
