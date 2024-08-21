#include <iostream>
using namespace std;
void display()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }
}
void display(int n)
{
    cout << n;
}
void display(int n, char c)
{
    for (int i = 0; i <= n; i++)
    {
        cout << c;
    }
}
int main()
{
    display();
    display(5);
    display(5, '%');
    return 0;
}