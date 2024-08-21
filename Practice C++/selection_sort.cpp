#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array:";
    cin >> n;
    int A[n];
    cout << "Enter the  Elements of Array:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j] > A[i])
            {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
