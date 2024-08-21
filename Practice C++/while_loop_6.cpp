#include <iostream>
using namespace std;
int main ()
{
	int i,sum;
	i=1;
	sum=0;
	
	while (i<=5){
		
		cout<<i<<endl;
		sum=sum+i;
		i=i++;
	}
	cout<<"sum of numbers is\n"<<sum;
}
