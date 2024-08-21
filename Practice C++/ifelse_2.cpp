#include <iostream>
using namespace std;
int main()
{
    int bill, units;
    cout << "ENTER THE UNITS CONSUMPED BY THE CUSTOMER:";
    cin >> units;
    if (units > 0 && units < 100)
    {
        bill = 5 * units;
        cout << "YOUR BILL IS:" << bill;
    }
    else if (units >= 100 && units < 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
        cout << "YOUR BILL IS:" << bill;
    }
    else if (units >= 200 && units < 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
        cout << "YOUR BILL IS:" << bill;
    }
    else
    {
        bill = units * 15;
        cout << "YOUR BILL IS:" << bill;
    }
    return 0;
}