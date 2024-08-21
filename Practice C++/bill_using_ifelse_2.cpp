w#include <iostream>
using namespace std;
int main ()
{
	
int rate1,rate2,rate3,units,bill;
rate1=60;
rate2=100;
rate3=200;
cout<<"BILL CALCULATING PROGTRAMMING :\n";
cout<<"ENTER THE UNITS CONSUMPED BY THE CUSTOMER:\n";
cin>>units;

if (units<200)
{
	bill=units * rate1;
	cout<<"YOUR BILL IS :\n"<<bill;
}
else if (units>200 && units<300)
{
	bill = units * rate2;
	cout<<"YOUR BILL IS :\n"<<bill;

}
else 
{
	bill = units * rate3;
	cout<<"YOUR BILL IS :\n"<<bill;
}
return 0;
}
