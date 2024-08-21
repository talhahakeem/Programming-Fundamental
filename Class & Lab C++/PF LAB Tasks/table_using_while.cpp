#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i;
    j=1;
    while (j<=10)
    {
        cout<<i<<"*"<<j<<"="<<i*j<<endl;
        j++;
    }
    
    return 0;
}