/// program in which user Take 10 integer as inputs and print the numbers of positive numbers,negative numbers, odd numbers and even numbers.
#include <iostream>
using namespace std;
int main()
{
    int z[10];
    int pos = 0, neg = 0, odd = 0, even = 0;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> z[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (z[i] > 0)
        {
            pos += 1;
        }
        if (z[i] < 0)
        {
            neg += 1;
        }
        if (z[i] % 2 == 0)
        {
        
            even += 1;
        }
        if (z[i] % 2 != 0)
        {
            odd += 1;
        }
        
    }

    cout << "\nNumber of Positive numbers are:" << pos << endl;
    cout << "Number of negitive numbers are:" << neg << endl;
    cout << "Number of Even numbers are:" << even << endl;
    cout << "Number of Odd numbers are:" << odd << endl;

    return 0;
}