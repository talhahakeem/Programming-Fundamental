#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 30.29;
    cout << x << " " << y << endl;
    cout << &x << " " << &y << endl;
    int *ptr1 = &x;
    float *ptr2 = &y;
    cout << ptr1 << " " << ptr2 << endl;
    cout << *ptr1 << " " << *ptr2 << endl;
    return 0;
}