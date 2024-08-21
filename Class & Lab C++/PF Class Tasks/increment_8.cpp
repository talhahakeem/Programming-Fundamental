#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    a=b++;
    b=++a;
    b+a++;
    cout<<a<<b;
return 0;
}