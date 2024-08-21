#include <iostream>
using namespace std;
void display(int *p)
{
    cout << "Number entered using pointer is " << *p << endl;
}
int main()
{
    int a;
    int *p = &a;
    cout << "Enter a number: ";
    cin >> a;
    display(p);
    return 0;
}
