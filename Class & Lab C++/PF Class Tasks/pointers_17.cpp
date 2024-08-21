#include <iostream>
using namespace std;
int power(int *base, int *exp)
{
    int result = 1;
    while (*exp > 0)
    {
        result = result * *base;
        *exp--;
    }
    return result;
}
int main()
{
    int b, e;
    cout << "Enter the value of base & Exponent : ";
    cin >> b >> e;
    cout << "Result: " << power(&b, &e) << endl;
    return 0;
}
