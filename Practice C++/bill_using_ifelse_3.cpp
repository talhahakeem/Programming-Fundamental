#include<iostream>
using namespace std;
int main ()
{
	int rate1,rate2,rate3,units,bill;
	rate1=60;
	rate2=100;
	rate3=200;
	cout<<"ENTER THE UNITS CONSUMED BY THE CUSTOMER:";
	cin>>units;
	
	if(units<=200){
		bill=units * rate1;
		cout<<"YOUR BILL IS:"<<bill;
	}
		
	
	else if (units>200 && units<300){
		
	bill=units * rate2;
		cout<<"YOUR BILL IS:"<<bill;
	}
	else {
		bill =units * rate3;
		cout<<"YOUR BILL IS:"<<bill;
	}
}

