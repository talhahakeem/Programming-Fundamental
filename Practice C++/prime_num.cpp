#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime. ";
    }
    else
    {
        cout << "Number is Not A prime. ";
    }

    return 0;
}