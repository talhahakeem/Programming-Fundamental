#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    a=b=x=y=0;
    b=a++;
    y=++x;
    cout<<a<<b<<x<<y;
return 0;
}