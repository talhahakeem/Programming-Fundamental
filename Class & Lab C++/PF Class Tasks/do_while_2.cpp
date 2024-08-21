#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:";
    cin >> n;
    if (n % 2 == 0)
    {
        int i = 2;
        do
        {
            cout << i << endl;
            i += 2;
        } while (i <= n);
    }
    else
    {
        int i = 1;
        do
        {
            cout << i << endl;
            i += 2;
        } while (i <= n);
    }

    return 0;
}