#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    int max=0;
    if (max<a)
    {
        max=a;
    }
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
       max=c;
    }
    cout<<max;
    
    
    
    return 0;
}