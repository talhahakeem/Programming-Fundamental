#include <iostream>
using namespace std;
int main()
{
    int n, even = 0, odd = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Even Elements are: ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
            even++;
        }
    }
    cout << "\nOdd Elements are: ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            cout << array[i] << " ";
            odd++;
        }
    }
    cout << "\nNumber of Even Elements are:" << even;
    cout << "\nNumber of Odd Elements are:" << odd;

    return 0;
}