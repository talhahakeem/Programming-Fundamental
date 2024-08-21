#include <iostream>
using namespace std;
int main ()
{
	int sec,h,m,s;
	cout<<"ENTER THE SECONDS:";
	cin>>sec;
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	sec=sec%60;
	s=sec;
	cout<<h<<":"<<m<<":"<<s<<endl;
	return 0;
}
