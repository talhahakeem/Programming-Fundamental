#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "Enter the length of rectangle: ";
    cin >> l;
    cout << "Enter the Breadth of rectangle: ";
    cin >> b;
    if (l == b)
    {
        cout << "IT IS A SQUARE.";
    }
    else
    {
        cout << "IT IS NOT A SQUARE.";
    }
    return 0;
}