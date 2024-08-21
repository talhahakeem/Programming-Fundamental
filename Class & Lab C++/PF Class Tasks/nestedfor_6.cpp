#include <iostream>
using namespace std;
int main()
{
    int c = 2;
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        c = c + 2;
        cout << endl;
    }

    return 0;
}
