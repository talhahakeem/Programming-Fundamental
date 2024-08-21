#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number upto which you want to print the sum of odd numbers:";
    cin >> n;
    int i = 1;
    int sum = 0;
    do
    {
        sum += (2 * i - 1);
        i++;

    } while (i <= n);
    cout << "Sum of first " << n << " odd numbers=" << sum;
    return 0;
}