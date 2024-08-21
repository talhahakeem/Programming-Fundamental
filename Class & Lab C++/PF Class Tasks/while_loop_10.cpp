#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a>>i;
    int x=1;
    while (x<=i)
    {
       cout<<a<<" * "<<x<<" = "<<a * x<<endl;
       x++;
    }
    
    return 0;
}
