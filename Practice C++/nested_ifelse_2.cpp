#include <iostream>
using namespace std;
int main()
{
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	
	if(p1>p2 && p1>p3){
		
		cout<<"age of oldest person is :"<<p1;
		
	}
	else if (p2>p1 && p2>p3)
	{
		
cout<<"age of oldest person is :"<<p2;
	}
	else if ((p3>p1 && p3>p2)){
		cout<<"age of oldest person is :"<<p3;
	}
	
	
	
	
	if(p1<p2 && p1<p3){
		
		cout<<"age of youngest person is :"<<p1;
		
	}
	else if (p2<p1 && p2<p3)
	{
		
cout<<"age of youngest person is :"<<p2;
}
	else {
	
	
	cout<<"age of youngest person is :"<<p3;
}



	return 0;
	}
	
	
	

