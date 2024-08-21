#include <iostream>
using namespace std;
void square(int n)
{
    cout << n << "\t" << n * n << endl;
}
int main()
{
    int A[5];
    cout << "Enter the Elements of Array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        square(A[i]);
    }
    return 0;
}