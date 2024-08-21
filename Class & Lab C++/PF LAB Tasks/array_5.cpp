#include <iostream>
using namespace std;
int main() 
{
    int a[5] = {7, 2, 5, 8, 1};
    int k[5];
    cout << "Arrays Elements are:\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << endl;
    }

    for (int i = 4; i >= 0; i--)
    {
        k[4 - i] = a[i];
    }
    cout << "Reverse Array Elements are:\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << k[i] << endl;
    }

    return 0;
}