// program that inputs a number from the user and displays a table of that number using while loop.
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    m = 1;
    cout << "Enter the number:";
    cin >> n;
    while (m <= 10)
    {
        cout << n << " * " << m << " = " << m * n << endl;
        m = m + 1;
    }

    return 0;
}
