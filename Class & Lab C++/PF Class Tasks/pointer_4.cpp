#include <iostream>
using namespace std;
void greatest_smallest(int *a, int *b, int *c)
{
    int max = *a, min = *a;
    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;
    if (*b < min)
        min = *b;
    if (*c < min)
        min = *c;
    cout << "Greatest number is " << max << endl;
    cout << "Smallest number is " << min << endl;
}
int main()
{
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    greatest_smallest(p1, p2, p3);
    return 0;
}
