// Display the Array in Reverse Order.
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 8, 5, 9, 3};
    for (int i = 4; i >= 0; i--)
    {
        cout << A[i];
    }

    return 0;
}