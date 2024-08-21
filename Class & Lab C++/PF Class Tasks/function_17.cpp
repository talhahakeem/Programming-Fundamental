#include <iostream>
using namespace std;
void product(int a, int b)
{
    cout << a * b;
}
int sum(int a, int b)
{
    int s;
    s = a + b;
    product(a, b);
    product(a, b);
    return s;
}
int main()
{
    int result = sum(3, 5);
    cout << result;
    return 0;
}