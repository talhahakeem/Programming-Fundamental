#include <iostream>
using namespace std;
void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the numbers which you want to swap: ";
    cin >> x >> y;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapValues(&x, &y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
