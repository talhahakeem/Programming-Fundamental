#include <iostream>
using namespace std;
int main()
{
	int ch;
	cout << "ENTER ANY CHARACTER\n";
	cin >> ch;

	if ((ch >= 'a' && ch <= 'b') || (ch >= 'A' && ch <= 'B'))
	{

		cout << ch << "= is an alphalbet\n";
	}
	else if (ch >= 0 && ch <= 9)
	{
		cout << ch << "= is a digit\n";
	}
	else
	{
		cout << ch << "= is a special character.\n";
	}
	return 0;
}
