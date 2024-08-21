#include <iostream>
using namespace std;
int main()
{
    int a;
    int *p = &a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Address of pointer to " << a << " is " << &p << endl;
    return 0;
}
