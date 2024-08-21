#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    for (int j = 1; j <= 500; j++)
    {
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == j)
        {
            cout << j << " ";
        }
        sum=0;
    }
    return 0;
}