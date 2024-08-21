#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << "*";
            j++;
        } while (j <= i);
        cout << endl;
        i++;

    } while (i <= rows);
    return 0;
}
