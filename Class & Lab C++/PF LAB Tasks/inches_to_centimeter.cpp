#include<iostream>
using namespace std;
int main()
{
    float height_in_inches,height_in_centimeters;
    cout<<"Enter the Height in Inches:";
    cin>>height_in_inches;
    height_in_centimeters=height_in_inches * 2.54;
    cout<<"Your Height in centimeters is:";
    cout<<height_in_centimeters<<"cm";
return 0;
}