#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int A[3][4] = {{9, 4, 7, 3}, {2, 8, 3, 4}, {7, 4, 5, 9}};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (A[i][j] == 8)
            {
                cout << "Value found at row number " << i + 1 << " And Column number " << j + 1 << endl;
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "Number is not found.";
    }
    else
    {
        cout << "number found " << count << " times";
    }

    return 0;
}