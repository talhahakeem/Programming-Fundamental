// 12.	Write a program to take marks of 5 subjects and print their average of all marks.
#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3, sub4, sub5, avg;
    cout << "Enter the marks of Subject 1: ";
    cin >> sub1;
    cout << "Enter the marks of Subject 2: ";
    cin >> sub2;
    cout << "Enter the marks of Subject 3: ";
    cin >> sub3;
    cout << "Enter the marks of Subject 4: ";
    cin >> sub4;
    cout << "Enter the marks of Subject 5: ";
    cin >> sub5;
    avg = sub1 + sub2 + sub3 + sub4 + sub5 / 5;
    cout << "Average of All Marks is: " << avg;
    return 0;
}
