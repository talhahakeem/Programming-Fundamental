//  Program that input three numbers and display the maximum number

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,max;
    cout<<"Enter the First Number:";
    cin>>n1;
    cout<<"Enter the Second Number:";
    cin>>n2;
    cout<<"Enter the Third Number:";
    cin>>n3;
    max=n1;
    
    if (n2>max)
    {
        max=n2;
    }

    if (n3>max)
    {
        max=n3;
    }
   
    cout<<"Maximum Number:"<<max;
    return 0;
}