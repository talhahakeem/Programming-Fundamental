#include <iostream>
using namespace std;
int main()
{
    int marks[5], *ptr;
    cout << "Enter the Five subject marks : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    ptr = marks;
    cout << "Entered five subjects marks are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr++<< " ";
    }

    return 0;
}