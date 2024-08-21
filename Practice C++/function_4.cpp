#include <iostream>
using namespace std;
void change(int n)
{
    int a, b;
    a = n + 1;
    b = n - 1;
    cout << "Number before " << n << " is " << b<<endl;
    cout << "Number after " << n << " is " << a;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    change(n);
    return 0;
}