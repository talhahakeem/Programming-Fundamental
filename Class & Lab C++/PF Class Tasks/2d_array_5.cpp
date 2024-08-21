#include <iostream>
using namespace std;

int main()
{
    int row1, column1, row2, column2;
    cout << "Enter number of rows and columns for first Array: ";
    cin >> row1 >> column1;
    cout << "Enter number of rows and columns for second Array: ";
    cin >> row2 >> column2;

    if (row1 != column2)
    {
        cout << "Arrays multiplication not possible.";
        return 0;
    }

    int arr1[row1][column1], arr2[row2][column2], M[row1][column2];
    cout << "Enter elements of First Array : ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements of second Array : ";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            M[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            for (int k = 0; k < column1; k++)
            {
                M[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "Multiplication of two arrays is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }
    return 0;
}
