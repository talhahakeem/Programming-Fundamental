// Program to convert a positive number into a negative number by using switch Statement.
#include <iostream>
using namespace std;
int main()
{
    float num;
    int choice;
    cout << "Select 1, for Negative to positive\n";
    cout << "Select 2, for positive to negative\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter a Negative number:";
        cin >> num;
        num = num * (-1);
        cout << "the Positive form of the number is:" << num;
        break;
    }
    case 2:
    {
        cout << "Enter a Positive number:";
        cin >> num;
        num = num * (-1);
        cout << "Negative form of the number is:" << num;
        break;
    }
    default:
    {
        cout << "Invalid Input,Please enter the number.";
    }
    }
    return 0;
}