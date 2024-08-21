// 6.	Write a program that input two values from user and print the division of it.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float division;
    cout << "Enter the First value: ";
    cin >> a;
    cout << "Enter the Second value: ";
    cin >> b;
    division = a / b;
    cout << "Division  of your entered values is: " << division;
    return 0;
}