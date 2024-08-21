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
    int max = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum number in Array is :" << max;

    return 0;
}
