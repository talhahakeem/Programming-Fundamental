#include <iostream>
using namespace std;
void fun()
{
    static int n = 0;
    n++;
    cout << "Value of n is : " << n<<endl ;
}
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        fun();
    }

    return 0;
}