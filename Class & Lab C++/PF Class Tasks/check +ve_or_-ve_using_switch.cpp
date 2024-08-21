// program to check whether a number is positive, negative or zero using switch.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number:";
    cin >> num;
    switch (num > 0)
    {
    case 1:
    {
        cout << num << " is positive number.";
        break;
    }
    case 0:
        switch (num < 0)
        {
        case 1:
        {
            cout << num << " negitive number.";
            break;
        }
        case 0:
        {
            cout << num << " its' Zero.";
            break;
        }
        }
        break;
    }

    return 0;
}