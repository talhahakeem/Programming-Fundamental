#include <iostream>
using namespace std;
int g;
void display(int n)
{
    int r = n * 2;
    cout << r;
}
int main()
{
    cout << "Enter the number: ";
    cin >> g;
    display(g);
    return 0;
}