#include<iostream>
using namespace std;
void fun(int A[])
{
    cout<<"Value of Arrays Elements are: ";
    for (int  i = 0; i < 5; i++)
    {
       cout<<A[i]<<" ";
    }
    
}
int main()
{
    int A[5];
    cout<<"Enter the Elements of Array:";
    for (int  i = 0; i < 5; i++)
    {
        cin>>A[i];
    }
    fun(A);
     
    return 0;
}