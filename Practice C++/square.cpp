// 13.	Write a program that input values from user and print the square of it.
#include <iostream>
using namespace std;
int main()
{
    int n, sq;
    cout << "Enter the value: ";
    cin >> n;
    sq = n * n;
    cout << "Square of your given value is: " << sq;
    return 0;
}