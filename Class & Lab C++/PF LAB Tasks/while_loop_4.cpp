#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;
    i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}