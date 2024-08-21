// 5.	Write a program that input two values from user and print the sum of it.
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "Enter the First value: ";
    cin >> a;
    cout << "Enter the Second value: ";
    cin >> b;
    sum = a + b;
    cout << "Sum of your entered values is: " << sum;
    return 0;
}