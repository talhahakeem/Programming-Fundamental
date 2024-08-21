#include <iostream>
using namespace std;
int main()
{
    int age;
    float percentage;
    char gender;
    string shift;
    cout << "Enter ther Age: ";
    cin >> age;
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter shift: ";
    cin >> shift;
    if (age >= 18 && age <= 25)
    {
        cout << "You can get admission.";
    }
    else
    {
        cout << "You are not eligible.";
    }

    if (percentage >= 70.5 && percentage <= 100)
    {
        cout << "Eligible for schalorship. ";
    }
    else
    {
        cout << "Not eligible for schalorship. ";
    }

    if (gender == 'F' || gender == 'f')
    {
        cout << "you can apply for labour quota";
    }
    else
    {
        cout << "You cannot apply for labour quota.";
    }

    if (shift == "Morning")
    {
        cout << "Student can apply.";
    }
    else
    {
        cout << "Due to winter season shift is cancelled.";
    }

    return 0;
}