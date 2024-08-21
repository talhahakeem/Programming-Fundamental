// 10.	Write a program to take input loan amount from user and tell the interest in his loan.
#include <iostream>
using namespace std;
int main()
{
    int amount, interest;
    float interest_rate = 0.05;
    cout << "Enter the Loan Amount: ";
    cin >> amount;
    interest = amount * interest_rate;
    cout << "Your interest on loan is: " << interest;
    return 0;
}