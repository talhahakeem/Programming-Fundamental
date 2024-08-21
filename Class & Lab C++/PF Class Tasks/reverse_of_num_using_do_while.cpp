#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter the number you want to reverse:";
    cin >> n;
    do
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    } while (n > 0);
    cout << "Reverse of number is:" << rev;

    return 0;
}
