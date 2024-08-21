#include<iostream>
using namespace std;
float f(float salary,int grade);
int main()
{
    float salary,bonus;
    int x,grade;
    cout<<"Enter your salary:";
    cin>>salary;
    cout<<"Enter your grade:";
    cin>>grade;
    cout<<"Your Total Salary is:";
    x=f(salary,grade );
    cout<<x;
    return 0;
}
float f(float x,int z)
{
    float y;
    if (z>15)
    {
        y =0.5 * x;
    }
    else 
    {
        y =0.25 * x;
    } 
    x= y + x;
    
    return x;
}
