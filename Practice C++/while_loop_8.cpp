#include<iostream>
using namespace std;
int main ()
{
	int i,j;
	i=1;
	cout<<"enter the number which you want:\n";
	cin>>j;
	
	while(i<=10)
	{
		cout<<j<<"*"<<i<<"="<<j*i<<endl;
		i=i++;
	}
}
