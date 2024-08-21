#include <iostream>
using namespace std;

int raiseToPower(int &base, int &exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i ++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base,exponent;
    cout<<"Enter the value of base & exponent: ";
    cin>>base>>exponent;
    cout<< raiseToPower(base, exponent) << endl;

    return 0;
}