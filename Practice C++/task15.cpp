#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3], sum = 0;
    cout << "enter the frist array element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
        cout << endl;
    }
    cout << "enter the second array element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << "result matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}