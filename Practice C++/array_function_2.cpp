#include <iostream>
using namespace std;
int evencount(int A[])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (A[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int A[5];
    cout << "Enter the Elements of Array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    cout << "Nmuber of even aRRay Elements are : " <<evencount(A);
    return 0;
}