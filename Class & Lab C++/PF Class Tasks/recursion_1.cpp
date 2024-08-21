#include <iostream>
using namespace std;
void print(int i)
{
    if (i <= 5)
    {
        cout << i << endl;
        i++;
        print(i);
    }
}
int main()
{
    int i = 1;
    print(i);
    return 0;
}