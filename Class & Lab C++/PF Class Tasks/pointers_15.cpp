#include <iostream>
using namespace std;
bool Prime(int *num)
{
    if (*num <= 1)
        return false;
    for (int i = 2; i * i <= *num; i++)
    {
        if (*num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (Prime(&n))
    {
        cout << n << " is prime." << endl;
    }
    else
    {
        cout << n << " is not prime." << endl;
    }
    return 0;
}
