#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Divisor of "<<n<<"=";
	int div=1;
	while(div<=n)
	{
		if(n%div==0)
		{
			cout<<div;
		}
		div++;
	}
	



return 0;
}

