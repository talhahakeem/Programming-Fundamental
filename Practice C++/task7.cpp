#include <iostream>
using namespace std;

void count(string s)
{
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (s[i] == s[j])
            {
                cout << "Repeating character: " << s[i] << endl;
                break;
            }
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    count(s);
    return 0;
}
