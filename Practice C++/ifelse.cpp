#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter any number ";
	cin >> a;
	cout << "ENTER THE SECOND NUMBER:";
	cin >> b;
	if (a * a == b)
	{
		cout << "SECOND NUMBER IS THE SQUARE ROOT OF FIRST: ";
	}
	else
	{
		cout << "Second number is not square root of first: ";
	}
	return 0;
}
