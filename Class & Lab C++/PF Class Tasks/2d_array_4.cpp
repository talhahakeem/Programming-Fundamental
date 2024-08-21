#include <iostream>
using namespace std;
int main()
{
    int rows, colums;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> colums;
    int arr1[rows][colums], arr2[rows][colums], sub[rows][colums];
    cout << "Enter the elements of first Array : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of second Array : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    cout << "Subtraction  of the two matrices is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
