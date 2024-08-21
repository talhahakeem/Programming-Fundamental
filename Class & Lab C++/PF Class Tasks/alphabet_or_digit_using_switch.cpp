// program to check whether an input is an alphabet, digit or special character.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    switch (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
    case 1:
        cout << "Your entered character is alphabet";
        break;
    case 0:
        switch (ch >= '0' && ch <= '9')
        {
        case 1:
            cout << "Your entered character is digit";
            break;
        case 0:
            cout << "Your entered character is Special character";
            break;
        }
        break;
    }
    return 0;
}
