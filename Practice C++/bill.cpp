#include <iostream>
using namespace std;
int main(){
	int item1,item2,quantityitem1,quantityitem2,bill,totalbill;
	int tip=50;
    int gst,servicetax;
	cout<<"Enter price of Rice:";
	cin>>item1;
	cout<<"Enter Quantity:";
	cin>>quantityitem1;
	cout<<"Enter price of Mutton Karhai:";
	cin>>item2;
	cout<<"Enter Quantity:";
	cin>>quantityitem2;
	bill=(item1*quantityitem1)+(item2*quantityitem2);
	cout<<"Bill is:"<<bill;
    gst=bill*15/100;
    servicetax=gst+20;
	totalbill=bill+gst+tip+servicetax;
	cout<<"Your total bill is="<<totalbill;
	return 0;
}