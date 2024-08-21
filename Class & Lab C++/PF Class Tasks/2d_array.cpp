#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {3, 4, 5, 6, 7, 8};
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "ENTER THE VALUE:";
            cin >> A[i][j];
            cout << endl;
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}