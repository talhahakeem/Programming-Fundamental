#include <iostream>
using namespace std;
int area(int b, int h)
{
    int a;
    a = 0.5 * b * h;
    return a;
}
int main()
{
    int b, h;
    float a;
    cout << "Enter the base and height of triangle : ";
    cin >> b >> h;
    a = area(b, h);
    cout << "Area of triangle is: " << a;

    return 0;
}