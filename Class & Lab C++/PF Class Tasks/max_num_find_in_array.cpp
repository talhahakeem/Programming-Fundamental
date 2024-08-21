// Maximum Number finding in an array.
#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    int A[5] = {2, 8, 5, 9, 3};
    for (int i = 0; i < 5; i++)
    {
        if (max < A[i]) 
        {
            max = A[i];
        }
    }
    cout << "Maximum number:" << max;

    return 0;
}