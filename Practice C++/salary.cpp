// 11.	Write a program to take input working hours of employees and print their salary according to working hours.
#include <iostream>
using namespace std;
int main()
{
    int hours, salary, perhour_salary;
    perhour_salary = 500;
    cout << "Enter the No. of working hours: ";
    cin >> hours;
    salary = perhour_salary * hours;
    cout << "Your Salary is: " << salary;
    return 0;
}