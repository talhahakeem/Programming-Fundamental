#include<iostream>
using namespace std;
int main()
{
 int rate_1,rate_2,units,bill;
 rate_1=50;
 rate_2=60;
 cout<<"ENTER THE UNITS CONSUMPED BY THE CUSTOMER:";
 cin>>units;

 if (units<=100)
 {
 bill=units * rate_1;
 cout<<"YOUR BILL IS :"<<bill;
 }
else {
 bill=units * rate_2;
 cout<<"YOUR BILL IS :"<<bill;
}
 }
