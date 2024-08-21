#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            cout << i << " ";
        }
        sum = 0;
    }

    return 0;
}
