#include <iostream>
using namespace std;
int main()
{
    int num, check = 0;
    cout << "Enter a Number:";
    cin >> num;
    int i = 1;
    do
    {
        if (num % i == 0)
        {
            check++;
        }
        i++;

    } while (i <= num);

    if (check == 2)
    {
        cout << "Number is a Prime.";
    }
    else
    {
        cout << "Number is not a Prime.";
    }

    return 0;
}