#include <iostream>
using namespace std;
int main()
{
	int sum,num,upperlimit;
	sum=0;
	num=1;
	cout<<"ENTER THE UPPER LIMIT DIGIT:\n";
	cin>>upperlimit;
	while (num<=upperlimit)
	{
			sum=sum+num;
			num=num+1;
		}
	cout<<"SUM OF INTERGERS RFROM 1 TO UPPER LIMIT IS"<<sum<<endl;
	
	}
	

