// program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<iostream>
using namespace std;
int main()
{
    int side_1,side_2,side_3;
	cout<<"Enter the length of side_1:";
	cin>>side_1;
	cout<<"Enter the length of side_2:";
	cin>>side_2;
	cout<<"Enter the length of side_3:";
	cin>>side_3;
	if (side_1==side_2 && side_2==side_3)
	{
		cout<<"Triangle is Equilateral.";
	}
	else if (side_1==side_2||side_1==side_3||side_2==side_3)
	{
		cout<<"Triangle is Isosceles.";
		
	}
	else
	{
		cout<<"Triangle is Scalene.";
	}
return 0;
}