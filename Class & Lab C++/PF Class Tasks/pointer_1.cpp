#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Address of " << a << " is " << &a << endl;
    return 0;
}
