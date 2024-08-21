#include<iostream>
using namespace std;
int main()
{
    double p,r,t,i;
    cout<<"Enter the Principal amount:";
    cin>>p;
    cout<<"Enter the rate:";
    cin>>r;
    cout<<"Enter the time:";
    cin>>t;
    i=(p*r*t)/100;
    cout<<"Principal amount is=RS."<<p<<endl;
    cout<<"Rate="<<r<<"%"<<endl;
    cout<<"Time="<<t<<"years"<<endl;
    cout<<"Simple interest amount=RS."<<i;
return 0;
}