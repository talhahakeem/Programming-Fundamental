#include <iostream>
using namespace std;
int countVowels(char *str)
{
    int count = 0;
    while (*str)
    {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        str++;
    }
    return count;
}

int main()
{
    char str[] = "Hello World";
    cout << "Number of vowels: " << countVowels(str) << endl;
    return 0;
}
