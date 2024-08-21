// program that input five integers.It finds and print the largest and smallest integer.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the Five integers:";
    cin>>a>>b>>c>>d>>e;
    int largest=a;
    int smallest=a;
    
    if ( b > largest)
    largest=b;
    if (c > largest)
    largest=c;
    if (d > largest)
    largest=d;
    if (e > largest)
    largest=e;

    if (b < smallest)
    smallest=b;
    if (c < smallest)
    smallest=c;
    if (d < smallest)
    smallest=d;
    if (e < smallest)
    smallest=e;
    cout<<"Largest Number is:"<<largest<<endl;
    cout<<"Smallest Number is:"<<smallest;
return 0;
}   