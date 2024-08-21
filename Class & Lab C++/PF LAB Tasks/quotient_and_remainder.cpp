#include<iostream>
using namespace std;
int main()
{
    int div,dis,q,r;
    cout<<"Enter the dividend and divisor: ";
    cin>>dis>>div;
    q=dis/div;
    r=dis%div;
    cout<<"Quotient:"<<q<<endl;
    cout<<"Remainder:"<<r;
    
return 0;
}