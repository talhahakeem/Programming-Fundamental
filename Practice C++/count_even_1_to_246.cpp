#include<iostream>
using namespace std;
int main()
{
    int n=246;
    int i=1,count=0;
    while (i<=n)
    {
       n= n/2;
       count+=1;
       cout<<n<<" ";
    }
    cout<<endl<<count;
    
    return 0;
}