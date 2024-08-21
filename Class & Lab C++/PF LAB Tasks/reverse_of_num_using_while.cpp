#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev = 0;
    cout << "Enter the number you want to reverse:";
    cin >> n;
    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    cout << "Reverse of given number is :" << rev;

    return 0;
}