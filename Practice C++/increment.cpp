#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=6;
	a=b++;
	b=++a;
	b=a++;
	cout<<a<<endl<<b;


return 0;
}

