#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Before Swapping :\n";
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping :\n";
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}