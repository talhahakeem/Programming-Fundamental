#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter Your Rows: ";
    cin >> rows;
    cout << "Enter Your Columns: ";
    cin >> columns;
    int Array_1[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter Integer: ";
            cin >> Array_1[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << Array_1[i][j] << " ";
        }
        cout << endl;
    }
    int Array_2[rows][columns];
    cout << "Enter Your Rows: ";
    cin >> rows;
    cout << "Enter Your Columns: ";
    cin >> columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter Integer: ";
            cin >> Array_2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << Array_2[i][j] << " ";
        }
        cout << endl;
    }
    int Array_3[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            Array_3[i][j] = Array_1[i][j] + Array_2[i][j];
            cout << Array_3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


