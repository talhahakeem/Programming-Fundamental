#include<iostream>
using namespace std;
int main()
{
	int num;
	string flavour,strawberry,chocolate,vanilla;
	float gst,bill,total_bill;
	cout<<"Enter the Kind of Flavour you want:(strawberry,chocolate,vanilla):";
	cin>>flavour;
	cout<<"Enter number of Scoops:";
	cin>>num;
	if(flavour=="strawberry")
	{
		bill=130 * num;
		cout<<"Bill:"<<bill<<endl;
	}
	else if(flavour=="chocolate")
	{
		bill=110 * num;
		cout<<"Bill:"<<bill<<endl;
	}
	else if(flavour=="vanilla")
	{
		bill=90 * num;
		cout<<"Bill:"<<bill<<endl;
	}
	else
	{
		cout<<"Sorry!we don't have Such flavour icecream";
	
	}
	gst=bill * 17/100;
	cout<<"GST:"<<gst<<endl;
	total_bill=bill+gst;
	cout<<"Total Bill:"<<total_bill;
return 0;
}

