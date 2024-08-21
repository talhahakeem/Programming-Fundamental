#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number as far as you want to print odd  numbers:";
    cin >> n;
    int i = 1;
    do
    {
        cout << i << endl;
        i += 2;
    } while (i <= n);

    return 0;
}