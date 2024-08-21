#include <iostream>
using namespace std;
int main()
{
    int A[3][3] = {{4, 8, 7}, {45, 5, 18}, {7, 21, 19}};
    int min = A[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min > A[i][j])
                min = A[i][j];
        }
    }
    cout << "Minimum Number is = " << min;
    return 0;
}