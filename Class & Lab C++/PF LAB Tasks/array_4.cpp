#include <iostream>
using namespace std;
int main()
{
    int a[5] = {7, 2, 5, 8, 1};
    int k[5];
    cout << "Arrays Elements are:\n";
    for (int i = 0, j = 4; i <= 4, j >= 0; i++, j--)
    {
        k[i] = a[j];
        cout<<a[i]<<endl;
    }
    cout << "Reverse Array Elements are:\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << k[i] << endl;
    }

    return 0;
}