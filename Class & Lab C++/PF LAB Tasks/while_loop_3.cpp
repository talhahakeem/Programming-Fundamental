#include <iostream>
using namespace std;
int main()
{
    int i, n = 5;
    cout << "Enter the number:";
    cin >> i;
    while (n <= i + 5)
    {
        cout << n;

        n++;
    }

    return 0;
}