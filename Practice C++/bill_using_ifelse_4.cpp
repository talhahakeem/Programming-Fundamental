#include <iostream>
using namespace std;
int main ()
{
	int rate_1,rate_2,rate_3,units,bill_1,bill_2,bill_3,t_bill;
	rate_1=50;
	rate_2=100;
	rate_3=200;
	
	cout<<"BILL CALCULATE PROGRAM:\n";
	cout<<"UNITS CONSUMPED BY USER:\n";
	cin>>units;
	
if(units<100 ){
	bill_1=rate_1 * units;


 if(units>100 && units<200){
	bill_2=rate_2 * units;
	
}
}
else {
	
bill_3=rate_3*units;

}
t_bill=bill_1+bill_2+bill_3;
cout<<"YOUR TOTAL BILL IS :\n"<<t_bill;
return 0;
}
