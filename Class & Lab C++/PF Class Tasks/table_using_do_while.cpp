#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
    int x=1;
    do
    {
        cout<<a<<"*"<<x<<"="<<a*x;
        x++;
    } while (x<=10);
    
    return 0;
}