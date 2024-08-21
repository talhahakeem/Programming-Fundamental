#include <iostream>
using namespace std;
int main()
{
    int A[5] = {3, 6, 9, 10, 12};
    int mid, n, loc, low, high;
    n = 9;
    loc = -1;
    low = 0;
    high = 4;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (n == A[mid])
        {
            loc = mid;
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
    if (loc == -1)
    {
        cout << "Not found.";
    }
    else
    {
        cout << "found at index " << loc;
    }
    return 0;
}
