#include<iostream>
using namespace std;
int main()
{
    char s[25];
    int k=0;
    cout<<"Enter the string : ";
    cin>>s;
    for (int  i = 0; s[i]!='\0'; i++)
    {
       k++;
    }
    for (int  i = k-1; i>=0;i--)
    {
        cout<<s[i];
    }
    
    
    return 0;
}