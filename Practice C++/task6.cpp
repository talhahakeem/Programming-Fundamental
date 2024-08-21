#include <iostream>
using namespace std;
void find(string s, char c, int *first, int *last)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            *first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            *last = i;
            break;
        }
    }
}
int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;
    char c;
    cout << "Enter the character for which you want to find the first and last index: ";
    cin >> c;
    int first = -1;
    int last = -1;
    int *ptr1 = &first;
    int *ptr2 = &last;
    find(s, c, ptr1, ptr2);
    cout << "CHARCTER " << c << " : "
         << "First index is: " << first << "and last index is: " << last;
    return 0;
}