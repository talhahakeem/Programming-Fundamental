#include<iostream>
using namespace std;
int c=9;
int main()
{
    int c=6;
    c++;
    cout<<c<<endl;
    ++c;
    cout<<c<<endl;
    c--;
    cout<<c<<endl;
    --c;
    cout<<c;
    cout<<::c;
return 0;
}