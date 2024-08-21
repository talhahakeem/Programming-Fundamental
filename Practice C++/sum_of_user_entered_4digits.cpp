#include<iostream>
using namespace std;
int main ()
{
	int n,a,b,c,d,sum;
	cout<<"Enter four digit number:";
	cin>>n;
	a=n/1000;
	n=n%1000;
	b=n/100;
	n=n%100;
	c=n/10;
	n=n%10;
	d=n/1;
	n=n%1;
	cout<<a<<b<<c<<d<<endl;
	sum=a+b+c+d;
	cout<<sum;
	return 0;
}
