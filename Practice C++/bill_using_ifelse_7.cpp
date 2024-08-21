#include <iostream>
using namespace std;
int main(){
	int units;
	float rate_1,rate_2,rate_3,bill_1,bill_2,bill_3,resultant_bill;
	rate_1=1.50;
	rate_2=2.00;
	rate_3=2.50;
	cout<<"Enter the Units Consumed by the Customer:";
	cin>>units;
	if (units<100)
	{
		bill_1=units*rate_1;
	}
	else if(units>100 && units<200)
	{
		bill_2=units * rate_2;
	}
	else 
	{
		bill_3=units * rate_3;
	}
	resultant_bill=bill_1+bill_2+bill_3;
	cout<<"Resultant bill is:"<<resultant_bill;
	return 0;
}