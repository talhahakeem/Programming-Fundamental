#include <iostream>
using namespace std;
int mystery(int);
int main()
{
    int n;
    for (n = 1; n <= 5; n++)
        cout << mystery(n) << endl;
    return 0;
}
int mystery(int k)
{
    int x, y;
    y = k;
    for (x = 1; x <= (k - 1); x++)
        y = y * (k - x);
    return y;
}