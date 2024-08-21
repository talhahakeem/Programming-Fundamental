#include <iostream>
using namespace std;
void display(int *a)
{
    cout << *a;
}
void display(int &a, int &b, int &c)
{
    cout << a << b << c;
}
void display(string n)
{
    cout << n;
}
void display()
{
    cout << "AHMAD ";
}
void display(char a)
{
    cout << a;
}
int main()
{
    int a=5,b=4,c=6;
    display(&b);
    cout<<b;
    // display(a,b,c);
    // display();
    // display("Talha");
    // display('T');
    return 0;
}