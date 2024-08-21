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
            return i;
        }
    }
    cout << "Not Found.";
    return 0;
}
