#include <iostream>
using namespace std;
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x, y;
    cout << "Enter the two integers: ";
    cin >> x >> y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    swap(ptr1, ptr2);
    cout << x << " " << y << endl;
    cout << *ptr1 << " " << *ptr2;
    return 0;
}