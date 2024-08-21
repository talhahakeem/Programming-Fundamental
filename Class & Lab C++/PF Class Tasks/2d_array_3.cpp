#include <iostream>
using namespace std;
int main()
{
    int rows, colums;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> colums;
    int arr[rows][colums];
    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all elements in the 2D array is: " << sum << endl;

    return 0;
}
