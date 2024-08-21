#include <iostream>
using namespace std;

int reverseDigit(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main()
{
    cout << reverseDigit(12345) << endl; // Outputs: 54321
    cout << reverseDigit(5600) << endl;  // Outputs: 65
    cout << reverseDigit(7008) << endl;  // Outputs: 8007
    cout << reverseDigit(-532) << endl;  // Outputs: -235
    return 0;
}
