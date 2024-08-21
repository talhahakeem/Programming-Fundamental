#include <iostream>
using namespace std;
int addition(int a, int b, int c)
{
    return a + b + c;
}
int multiplication(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    int a, b, c, sum, product;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the Second number : ";
    cin >> b;
    cout << "Enter the Third number : ";
    cin >> c;
    sum = addition(a, b, c);
    cout << "Addition of three numbers is : " << sum << endl;
    product = multiplication(a, b, c);
    cout << "Product of three numbers is : " << product;
    return 0;
}