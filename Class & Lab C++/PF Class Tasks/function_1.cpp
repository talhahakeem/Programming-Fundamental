#include <iostream>
using namespace std;
 int m, n;
void table(int n);
int main()
{
    cout << "Enter the number:";
    cin >> m;
    table(n);
    return 0;
}
void table(int n)
{
    int m = 1;
    while (m <= 10)
    {
        cout << n << " * " << m << " = " << m * n << endl;
        m = m + 1;
    }
}
