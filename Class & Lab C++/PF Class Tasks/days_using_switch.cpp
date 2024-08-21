// program that takes a month's number and year as input and uses a switch statement to print the number of days in that month.
#include <iostream>
using namespace std;
int main()
{
    int month, year;
    cout << "Enter the Year:";
    cin >> year;
    cout << "Enter the Month(1-12):";
    cin >> month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        cout << "Number of days For Year " << year << " and month " << month << " are 31.";
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        cout << "Number of days for year " << year << " and month " << month << " are 30.";
        break;
    }
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << "Number of days For Year " << year << " and month " << month << " are 29.(leap year)";
        }
        else
        {
            cout << "Number of days For Year " << year << " and month " << month << " are 28.";
        }
        break;
    default:
    {
        cout << "Invalid Month entered.Please enter the month from 1 to 12.";
    }
    }
    return 0;
}