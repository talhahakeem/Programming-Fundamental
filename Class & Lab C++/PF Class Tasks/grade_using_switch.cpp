// program that takes a student's marks as input and uses a switch statement to determine the corresponding grade (A, B, C, D, or F).
#include <iostream>
using namespace std;
int main()
{
    int marks;
    char grade;
    cout << "Enter the Marks(0-100):";
    cin >> marks;
    if (marks < 0 || marks > 100)
    {
        cout << "invalid marks.Please enter the marks from 0 to 100.";
        return 0;
    }
    else{
    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'E';
        break;
    default:
        grade = 'F';
    }
    cout << "Grade : " << grade;}
    return 0;
}
