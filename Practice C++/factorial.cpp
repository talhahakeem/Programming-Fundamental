#include <iostream>
using namespace std;
int main()
{
	int num;
	int factorial;
	factorial =1;
	cout<<"enter the number of factorial";
	cin>>num;
	while (num<=1){
		
factorial= factorial * num;
num=num-1;
	}
	cout<<"factorial is /n"<<factorial<<endl;
}
