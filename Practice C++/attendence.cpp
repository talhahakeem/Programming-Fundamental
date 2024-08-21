#include <iostream>
using namespace std;
int main()
{
    float classes, attended;
    float percentage;
    cout << "Enter the numbers of classes held: ";
    cin >> classes;
    cout << "Enter the numbers of classes attended: ";
    cin >> attended;
    percentage = attended / classes * 100;
    cout << "Percentage of classes Attended = " << percentage << "%" << endl;
    if (percentage >= 75)
    {
        cout << "Congradulations you are allowed to sit in exams.";
    }
    else
    {
        cout << "Sorry!You are not allowed to sit in exams.";
    }

    return 0;
}