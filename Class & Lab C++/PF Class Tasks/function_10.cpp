#include<iostream>
using namespace std;
void display(float x,int y,char z)
{
   cout<<x<<endl<<y<<endl<<z;
}
int main()
{
    float a=5.5;
    char ch='T';
    display(a,8,ch);
    return 0;
}