#include <iostream>
using namespace std;
int main()
{
    int n;
    int k, j;
    cout << "Enter the number:";
    cin >> n;
    int A[5] = {2, 3, 4, 6, 7};
    for (int i = 0; i < 5; i++)
    {
        if (n == A[i])
        {
            k = A[i];
            j = i;
        }
    }
    if (n == k)
    {
        cout << "Number Found at index " << j;
    }
    else
    {
        cout << "Not Found.";
    }

    return 0;
}
