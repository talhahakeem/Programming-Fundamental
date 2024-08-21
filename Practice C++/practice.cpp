#include<iostream>
using namespace std;
int main()
{
    int a=10,b=12,c=0;
   c= (c++ *b-- - ++a)/ --c;
    cout<<c;
    return 0;
}