#include <iostream>
using namespace std;
int main()
{
    int n, loc = -1;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int m;
    cout << "Enter the element you want to search : ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == m)
        {
            loc = i;
        }
    }
    if (loc == -1)
    {
        cout << "Value is not found.";
    }
    else
    {
        cout << "Value is found at index " << loc;
    }

    return 0;
}