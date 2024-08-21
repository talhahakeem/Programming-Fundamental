#include<iostream>
using namespace std;
int main()
{
    int c=6;
    c=c++;
    cout<<c;
    c=++c;
    cout<<c;
    c=c--;
    cout<<c;
    c=--c;
    cout<<c;


return 0;
}