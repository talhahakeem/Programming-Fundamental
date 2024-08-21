#include<iostream>
using namespace std;
int main()
{
    int n1=1;
    int n2=++n1;
    int n3=n1++;
    int n4=n2++;
    cout<<n1<<n2<<n3<<n4;
return 0;
}