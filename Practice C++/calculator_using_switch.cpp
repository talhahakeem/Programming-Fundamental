#include <iostream>
using namespace std;
int main()
{
    int Num1, Num2;
    char operation;
    cout << "Enter the First Number:";
    cin >> Num1;
    cout << "Enter the Operation(+,-,*,/):";
    cin >> operation;
    cout << "Enter the Second Number:";
    cin >> Num2;
    switch (operation)
    {
    case '+':
    {
        cout << "Sum of Two Numbers " << Num1 << " and " << Num2 << " is:" << Num1 + Num2;
        break;
    }
    case '-':
    {
        cout << "Subtraction of Two Numbers " << Num1 << " and " << Num2 << " is:" << Num1 - Num2;
        break;
    }
    case '*':
    {
        cout << "Multiplication of Two Numbers " << Num1 << " and " << Num2 << " is:" << Num1 * Num2;
        break;
    }
    case '/':
    {
        cout << "Division of Two Numbers " << Num1 << " and " << Num2 << " is:" << Num1 / Num2;
        break;
    }
    default:
    {
        cout << "invalid operation.Please enter the valid operation(+.-,*,%)";
    }
    }
    return 0;
}

