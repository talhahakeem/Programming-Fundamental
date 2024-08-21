#include <iostream>
using namespace std;
int main ()
{
	int days,years,months,weeks;
	cout<<"ENTER THE DAYS:";
	cin>>days; 
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	weeks=days/7;
	days=days%7;
	cout<<"YEARS="<<years<<endl;
	cout<<"MONTHS="<<months<<endl;
	cout<<"weeks="<<weeks<<endl;
	cout<<"days="<<days<<endl;
	return 0;
}
