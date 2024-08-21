// program to check vowel or consonant using switch case.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Alphabet:";
    cin >> ch;
    switch (ch)
    {
    case 'A':
    case 'a':
    {
        cout << "VOWEL";
        break;
    }
    case 'E':
    case 'e':
    {
        cout << "VOWEL";
        break;
    }
    case 'I':
    case 'i':
    {
        cout << "VOWEL";
        break;
    }
    case 'O':
    case 'o':
    {
        cout << "VOWEL";
        break;
    }
    case 'U':
    case 'u':
    {
        cout << "VOWEL";
        break;
    }
    default:
    {
        cout << "CONSONANT";
    }
    }

    return 0;
}