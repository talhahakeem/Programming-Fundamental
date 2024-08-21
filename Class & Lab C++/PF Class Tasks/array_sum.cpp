#include <iostream>
using namespace std;
void sumarray(int A[], int n)
{
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Number of Even elements are: " << even << endl;
    cout << "Number of Even elements are: " << odd;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sumarray(A, n);
    return 0;
}