#include <iostream>
using namespace std;
void add(int var1 = 5, int var2 = 10)
{
    int var3;
    var3 = var1 + var2;
    cout << "Sum of two numbers is :" << var3;
}
int main()
{
add();
add(7,8);
add(5);
    return 0;
}