#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number whose table you want to print:";
    cin >> a;
    cout << "Enter the number as far as you want to print:";
    cin >> b;
    int i = 1;
    do
    {
        cout << a << "*" << i << "=" << a * i << endl;
        i++;
    } while (i <= b);

    return 0;
}