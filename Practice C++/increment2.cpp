#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 2, z = 6;
    cout << x++ + z / 2 - --y << endl;
    cout << ++z - x + y++ * 2 << endl;
    return 0;
}