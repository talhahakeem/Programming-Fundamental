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
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1 ; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    cout << "Sorted Even Element are: ";
    for (int i = 0; i < n; i++)

    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
            even++;
        }
    }

    cout << "\nSorted Odd Elements are: ";
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
