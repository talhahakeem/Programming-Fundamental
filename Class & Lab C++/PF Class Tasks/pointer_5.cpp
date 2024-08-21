#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping, a=" << a << " and b=" << b << endl;
    swap(p1, p2);
    cout << "After swapping, a=" << a << " and b=" << b << endl;
    return 0;
}
