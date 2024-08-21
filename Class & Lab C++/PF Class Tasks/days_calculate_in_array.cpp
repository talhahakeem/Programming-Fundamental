// program in which user enter the current day and month from the user.It then displays the total number of days in the current year till the entered date.
#include <iostream>
using namespace std;
int main()
{
    int day, month, total;
    int Days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter the month number:";
    cin >> month;
    cout << "Enter the Day number:";
    cin >> day;
    total = day;
    for (int i = 0; i < month - 1; i++)
    {
        total = total + Days_per_month[i];
    }
    cout << "The Number of Days in this year Till date " << day << " - " << month << " : " << total;

    return 0;
}