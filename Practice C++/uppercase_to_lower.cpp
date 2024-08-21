#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Uppercase Letter(A-Z): ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        cout << "Converted Letter from uppercase to lowercase is: " << ch;
    }
    else
    {
        cout << "Please!Enter a Valid Letter.";
    }

    return 0;
}