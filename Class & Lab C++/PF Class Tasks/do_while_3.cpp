#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number as far as you want to print even numbers:";
    cin >> n;
    int i = 2;
    do
    {
        cout << i << endl;
        i += 2;
    } while (i <= n);

    return 0;
}