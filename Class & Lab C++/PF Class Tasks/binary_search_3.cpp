#include <iostream>
using namespace std;
int main()
{
    int A[5] = {3, 6, 9, 10, 12};
    int mid, i, n, low, high;
    n = 9;
    low = 0;
    high = 4;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (n == A[mid])
        {
            i = mid;
            break;
        }
        else if (n < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Value is found at index: " << i;
    return 0;
}
