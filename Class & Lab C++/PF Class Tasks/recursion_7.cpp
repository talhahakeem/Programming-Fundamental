#include <iostream>
using namespace std;
bool sorted(int array[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool arr = sorted(array + 1, n - 1);
    return (array[0] < array[1] && arr);
}
int main()
{
    int A[5] = {1,2,3,6,5};
    cout << sorted(A, 5);
    return 0;
}