#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter the size of Array:";
    cin >> n;
    int A[n];
    cout << "Enter the  Elements of Array:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 4; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Arrays Elements are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}