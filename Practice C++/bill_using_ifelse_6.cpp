#include <iostream>
using namespace std;
int main ()
{
	int rate_1,rate_2,units,bill;
	rate_1=50;
	rate_2=100;
	cout<<"BILL CALCULATING PROGRAMMING:\n";
	cout<<"ENTER THE UNITS CONSUMPED BY THE CUSTOMER:\n";
	cin>>units;
	
	if (units<=100)
	{
		bill=units* rate_1;
		cout<<"YOUR BILL IS:\n"<<bill;
	}
	else
	{
		bill=units * rate_2;
		cout<<"YOUR BILL IS:\n"<<bill;
	
	}
	return 0;
}
