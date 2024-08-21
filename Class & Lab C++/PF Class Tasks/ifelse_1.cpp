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
