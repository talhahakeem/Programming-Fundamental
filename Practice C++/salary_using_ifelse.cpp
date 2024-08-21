#include<iostream>
using namespace std;
int main()
{
    int salary,net;
cout<<"ENTER SALARY:";
cin>>salary;

if (salary>=20000){
    net=salary - (salary *7/100);
}
else if (salary>=10000){
net=salary - 1000;
}
else 
{
    net=salary;

}
cout<<net;
return 0;
}