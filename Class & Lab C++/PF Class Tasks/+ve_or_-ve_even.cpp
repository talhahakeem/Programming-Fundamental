#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "Number is +ve even number.";
        }
        else
        {
            cout << "number is +ve odd number.";
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "Number is -ve even number.";
        }
        else
        {
            cout << "number is -ve odd number.";
        }
    }
    return 0;
}