#include <iostream>
using namespace std;
int main()
{
    int s = 5;
    int *p;
    p = &s;
    cout << s << endl;
    cout << *p << endl;
    cout << &s << endl;
    cout << p << endl;
    *p = *p - 5;
    cout << s << endl;
    cout << *p << endl;
    cout << &s << endl;
    cout << p;
    return 0;
}