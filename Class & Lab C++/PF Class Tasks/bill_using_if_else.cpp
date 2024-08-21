// Program to Calculate ther Electricity bill:

#include <iostream>
using namespace std;
int main(){
	int units,bill;
	cout<<"Enter the Units Consumed by the Customer:";
	cin>>units;
	if (units<=100)
	{
		bill=units * 5;
	}
	else if(units>100 && units<=200)
	{
		bill=units * 7;
	}
	else 
	{
		bill=units * 10;
	}
    cout<<"Total Bill="<<bill;
    
	return 0;
}