#include<iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3, percentage, marks;\
    char grade;
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
    switch(percentage/10)
    {
        case 9:
        grade='A';
        case 8:
        grade='B';
        case 7:
        grade='C';
        case 6:
        grade='D';
        case 5:
        grade='E';
        default:
        grade='F';

    }
    cout<<"Grade:"<<grade;
return 0;
}   