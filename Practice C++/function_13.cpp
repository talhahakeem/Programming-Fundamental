#include <iostream>
using namespace std;
int square(int a)
{
    return a * a;
}
int cube(int b)
{
    return b * b * b;
}
int main()
{
    int n, m, r;
    cout << "Enter the two integers: ";
    cin >> n >> m;
    r = square(n) + cube(m);
    cout << "Result is: " << r;

    return 0;
}