#include <iostream>
using namespace std;
void checknum(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (n % 2 == 0 && count == 0)
    {
        cout << "Number is Prime Even. ";
    }
    else if (n % 2 != 0 && count == 0)
    {
        cout << "Number is Prime odd. ";
    }
    else if (n % 2 == 0 && count != 0)
    {
        cout << "Number is only Even , not prime .";
    }
    else if (n % 2 != 0 && count != 0)
    {
        cout << "Number is Only odd ,not prime .";
    }
    else
    {
        cout << "number is not a prime number.";
    }
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    checknum(n);
    return 0;
}