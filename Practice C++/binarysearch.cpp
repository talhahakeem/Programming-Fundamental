#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    int key;
    cout << "Enter the Element you want to search: ";
    cin >> key;
    int start, end, mid, loc = -1;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == A[mid])
        {
            loc = mid;
            break;
        }
        else if (key < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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