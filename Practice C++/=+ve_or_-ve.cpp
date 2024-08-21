#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number:" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "Number is positive." << endl;
    }
    else if (n < 0)
    {
        cout << "Number is negitive." << endl;
    }
    else if (n == 0)
    {
        cout << "Number is not positive nor negitive." << endl;
    }
    else
    {
        cout << "Number is invalid." << endl;
    }
    return 0;
}