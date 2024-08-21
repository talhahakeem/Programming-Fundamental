#include <iostream>
using namespace std;
int fun(int A[], int n, char s = '+')
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s == '+')
        {
            if (A[i] > 0)
            {
                sum += A[i];
            }
        }
        else
        {
            if (A[i] < 0)
            {
                sum += A[i];
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the size of array :: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int r = fun(A, n);
    int o = fun(A, n, '-');
    cout << "Sum of All positive elements is: " << r << endl;
    cout << "Sum of All negitive elements is: " << o;

    return 0;
}