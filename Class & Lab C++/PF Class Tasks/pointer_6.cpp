#include <iostream>
using namespace std;
void add(int *a, int *b)
{
    cout << "Sum of " << *a << " and " << *b << " is " << *a + *b << endl;
}
int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add(p1, p2);
    return 0;
}