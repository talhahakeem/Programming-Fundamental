#include <iostream>
using namespace std;
int add(int *a, int *b)
{
    int result = *a + *b;
    return result;
}
int subtract(int *a, int *b)
{
    int result = *a - *b;
    return result;
}
int multiply(int *a, int *b)
{
    int result = (*a) * (*b);
    return result;
}
int divide(int *a, int *b)
{
    if (*b != 0)
        return *a / *b;
    else
    {
        cout << "Error! Division by zero is not allowed.";
        return 0;
    }
}
int main()
{
    int a, b, result;
    char operatorChoice;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operatorChoice;
    switch (operatorChoice)
    {
    case '+':
        result = add(&a, &b);
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = subtract(&a, &b);
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = multiply(&a, &b);
        cout << "Result: " << result << endl;
        break;
    case '/':
        result = divide(&a, &b);
        if (b != 0)
            cout << "Result: " << result << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
