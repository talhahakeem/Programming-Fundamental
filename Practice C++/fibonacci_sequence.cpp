#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"Enter the limit:";
    cin>>limit;
    int b=1,next_term=0;
    for (int a = 0; a<=limit;)
    {
        cout<<a<<" ";
        next_term=a+b;
        a=b;
        b=next_term;
    }
    
    return 0;

}