#include <iostream>
using namespace std;
void reverse(int *p)
{
    int i;
    cout << "Reverse Array Elements are: ";
    for (i = 4; i >= 0; i--)
    {
        cout << *(p+i) << endl;
    }
}
int main()
{
    int A[5];
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    reverse(A);
    return 0;
}