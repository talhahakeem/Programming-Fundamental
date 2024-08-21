// program to find maximum number using switch.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the Second number: ";
    cin >> num2;
    switch (num1 > num2)
    {
    case 1:
    {
        cout << num1 << " is Maximum number.";
        break;
    }
    case 0:
        cout << num2 << " is Maximum number.";
        break;
    }

    return 0;
}