#include <iostream>
using namespace std;
void call(int a, int b, char c)
{
    switch (c)
    {
    case '+':
    {
        cout << a << " + " << b << " = " << a + b;
        break;
    }
    case '-':
    {
        cout << a << " - " << b << " = " << a - b;
        break;
    }
    case '*':
    {
        cout << a << " * " << b << " = " << a * b;
        break;
    }
    case '/':
    {
        cout << a << " / " << b << " = " << a / b;
        break;
    }
    default:
    {
        cout << "Invalid operation.";
    }
    break;
    }
}
int main()
{
    int n, m;
    char oper;
    cout << "Enter the two numbers : ";
    cin >> n >> m;
    cout << "Enter the operation: ";
    cin >> oper;
    call(n, m, oper);
    return 0;
}