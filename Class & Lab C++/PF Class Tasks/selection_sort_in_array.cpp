#include <iostream>
using namespace std;
int main()
{
    int n,temp;
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
        for (int j = i+1 ; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout<<"Sorted Arrays Elements are: \n ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
