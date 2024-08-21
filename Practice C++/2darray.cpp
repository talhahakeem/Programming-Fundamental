#include <iostream>
using namespace std;
int  maximum(int A[3][2])
{
    int max = A[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int A[3][2];
    cout << "Enter the Elements of 2D ARRAY: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Maximum element of 2D ARRAY is : " << maximum(A);

    return 0;
}