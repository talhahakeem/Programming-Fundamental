#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter the Elements of array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    int m, k, j;
    cout << "Enter the Element you want to search: ";
    cin >> m;
    for (int i = 0; i < 5; i++)
    {
        if (m == A[i])
        {
            k = A[i];
            j = i;
        }
    }
    if (m == k)
    {
        cout << "number is found at index " << j;
    }
    else
    {
        cout << "Number is not found. ";
    }

    return 0;
}