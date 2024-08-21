#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second  number:";
    cin>>b;
    cout<<"Value of first number before swapping is :"<<a<<endl;
    cout<<"Value of Second number before swapping is :"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    
    return 0;
}

