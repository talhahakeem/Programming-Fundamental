#include <iostream>
using namespace std;
int main()
{
    int k=0;
    char string1[20];
    cout << "Enter the string: ";
    cin >> string1;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        k++;
    }
    cout << "Reverse String is: ";
    for (int i = k - 1; i >= 0; i--)
    {
        cout << string1[i];
    }

    return 0;
}