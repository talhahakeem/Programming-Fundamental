#include <iostream>
using namespace std;

int main()
{
    int arr[7][7];
    int sum = 0;

    // Populate the array with user input values
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of all the left diagonal entries
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i + j == 6)
            {
                sum += arr[i][j];
            }
        }

        sum += arr[i][i];
    }

    // Display the sum
    cout << "The sum of all the left diagonal entries is: " << sum << endl;

    return 0;
}