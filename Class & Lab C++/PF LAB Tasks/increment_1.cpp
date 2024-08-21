#include<iostream>
using namespace std;
int main()
{
    int a=2,b=4;
    a=b++;
    cout<<a;
    b=a++;
    cout<<b;
    a=++b;
    cout<<a;
    b=++a;
    cout<<b;
    cout<<a<<b;
return 0;
}