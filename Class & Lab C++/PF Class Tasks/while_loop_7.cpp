// program that inputs a positive number.It then display the sum of all odd numbers and sum of all even numbers from 1 to the number entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int n, odd_sum = 0, even_sum = 0;
    cout << "Enter a positive number:";
    cin >> n;
    while (n >= 0)
    {
        if (n % 2 == 0)
        {
            even_sum = even_sum + n;
        }
        else
        {
            odd_sum = odd_sum + n;
        }
        n--;
    }
    cout << "The sum of even digits is:" << even_sum << endl;
    cout << "The sum of odd digits is:" << odd_sum;

    return 0;
}