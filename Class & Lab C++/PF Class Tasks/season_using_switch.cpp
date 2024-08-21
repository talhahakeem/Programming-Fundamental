// program that takes a month as input and uses a switch statement to determine and print the corresponding season (spring, summer, fall, winter).
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the month(1-12):";
    cin >> month;
    switch (month)
    {
    case 1:
    case 2:
    case 12:
    {
        cout << "The Season for month " << month << " is Winter.";
        break;
    }
    case 3:
    case 4:
    case 5:
    {
        cout << "The Season for month " << month << " is Spring.";
        break;
    }
    case 6:
    case 7:
    case 8:
    {
        cout << "The Season for month " << month << " is Summer.";
        break;
    }
    case 9:
    case 10:
    case 11:
    {
        cout << "The Season for month " << month << " is Fall.";
        break;
    }
    default:
    {
        cout << "Invalid Month entered.Please Enter a number from 1 to 12.";
    }
    }
    return 0;
}