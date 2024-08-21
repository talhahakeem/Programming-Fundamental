#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter the amount:";
    cin >> amount;
    cout << "NUMBER OF 500 NOTES=" << amount / 500 << endl;
    amount = amount % 500;
    cout << "NUMBER OF 100 NOTES=" << amount / 100 << endl;
    amount = amount % 100;
    cout << "NUMBER OF 50 NOTES=" << amount / 50 << endl;
    amount = amount % 50;
    cout << "NUMBER OF 20 NOTES=" << amount;
    return 0;
}