// Program that inputs a Number and finds whether it is even or odd.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    if (n%2==0)
    {
        cout<<"Your entered number is Even.";
    }
    else
    {
         cout<<"Your entered number is odd.";
    }
return 0;
}