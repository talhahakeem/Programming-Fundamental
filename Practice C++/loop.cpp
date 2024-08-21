#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 1;
    for (int i = 10; i > 5; i--)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i % 2 != 0)
            {
                a = ++a;
            }
            else
            {
                b = b++;
            }
        }
    }
    cout << "a= " << a << endl;
    cout << "b= " << b;

    return 0;
}