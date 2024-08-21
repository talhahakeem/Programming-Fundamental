#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=11; i++)
    {
       for (int j = 1; j<=11; j++)
       {
        if (i==j || j==11+1-i)
        {
         cout<<"*";
        }
        else
        {
          cout<<" ";
        }
        
       }
       cout<<endl;
       
    }
    
    return 0;
}