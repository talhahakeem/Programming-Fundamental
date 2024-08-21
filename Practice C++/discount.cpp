// 14.	Write a program that takes marks and fees from user and give discount based on specific condition (50% discount If marks greater than 80 otherwise discounts will be 20%).
#include <iostream>
using namespace std;
int main()
{
    int marks, fee, discount, dis_fee;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "Enter your Fee: ";
    cin >> fee;
    if (marks >= 80)
    {
        cout << "You got 50% Discount.\n";
        discount = fee * 50 / 100;
        dis_fee = fee - discount;
        cout << "Your fee After Discount is: " << dis_fee;
    }
    else
    {
        cout << "You got 20% discount.\n";
        discount = fee * 20 / 100;
        dis_fee = fee - discount;
        cout << "Your fee After Discount is: " << dis_fee;
    }

    return 0;
}