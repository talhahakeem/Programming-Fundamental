#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number :";
    cin>>n;
    for (int  i = n; i >=1; i--)
    {
        cout<<fact<<"*"<<i<<endl;
        fact=fact*i;
        
    }
    cout<<"Factorial of "<<n<<" is"<<fact;
    
    return 0;
}