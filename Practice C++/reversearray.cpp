#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n], B[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        B[j] = A[i];
    }
    cout << "Reverse Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}