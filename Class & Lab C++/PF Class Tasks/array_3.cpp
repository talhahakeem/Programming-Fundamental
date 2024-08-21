// Take Values From user & display array.
#include <iostream>
using namespace std;
int main()
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Number:";
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << A[i];
    }

    return 0;
}