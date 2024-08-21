#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    int A[10]={45,6709,85,945454,1011,11,-1,1,2,98};
    for (int i = 0; i < 10; i++)
    {
        int n = A[i];
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        cout << "The length of Array  " << A[i] << " is " << count<<endl;
    }
    return 0;
}