// program that inputs salary and grade.It adds 50% bonus if the grade is greater than 15.It adds 25% bonus if the grade is 15 or less and then displays the total salary.
    
#include<iostream>
using namespace std;
int main()
{
    float salary,bonus;
    int grade;
    cout<<"Enter your salary:";
    cin>>salary;
    cout<<"Enter your grade:";
    cin>>grade;
    
    if (grade>15)
    {
        bonus=0.5 * salary;
    }
    else 
    {
        bonus=0.25 * salary;
    } 
    salary=bonus + salary;
    cout<<"Your Total Salary is:";
    cout<<salary;
return 0;
}