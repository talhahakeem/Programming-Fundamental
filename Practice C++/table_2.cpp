#include<iostream>
using namespace std;
int main ()
{

int i,n;
i=1;

cout<<"ENTER THE NUMBER:";
cin>>n;

while (i<=10)
{
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	i=i+1;
}
return 0;
}
