#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3, percentage, marks;
    cout << "Enter Sub1 marks:";
    cin >> sub1;
    cout << "Enter Sub2 marks:";
    cin >> sub2;
    cout << "Enter Sub3 marks:";
    cin >> sub3;
    marks = sub1 + sub2 + sub3;
    cout << "Your obtained marks are:" << marks << "/300" << endl;
    percentage = marks * 100 / 300;
    cout << "Your marks percentage is:" << percentage << "%" << endl;

    if (percentage > 90)
    {
        cout << "Your grade is A";
    }
    else if (percentage > 80)
    {
        cout << "Your grade is B";
    }
    else if (percentage > 70)
    {
        cout << "Your grade is C";
    }
    else if (percentage > 60)
    {
        cout << "Your grade is D";
    }
    else if (percentage > 50)
    {
        cout << "Your grade is E";
    }
    else
    {
        cout << "Sorry!You are Failed.";
    }
    return 0;
}