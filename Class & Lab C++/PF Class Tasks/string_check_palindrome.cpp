#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
    char string1[100];
    int length, flag = 0;
    cout << "Enter the String: ";
    cin >> string1;
    length = strlen(string1);
    for (int i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "String is not  palindrome.";
    }
    else
    {
        cout << "String is palindrome.";
    }

    return 0;
}