#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if ((i + j) == 11|| (j - i) == 9 || i==10)
            {
                cout << "&";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }

    return 0;
}