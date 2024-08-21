#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> n;
    int A[n], B[n];
    cout << "ENTER THE ELEMENTS OF ARRAY:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    // cout << "Entered Arrays elements are: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << endl;
    // }
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        B[i] = A[j];
    }
    // cout << "Reverse Elements of Array are: \n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << B[i] << endl;
    // }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "The array is a palindrome.\n";
    }
    else
    {
        cout << "The array is not a palindrome.\n";
    }

    return 0;
}
