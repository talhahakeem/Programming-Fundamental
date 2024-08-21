#include <iostream>
using namespace std;
int main()
{
    int m, n, t = 0,sum=0;
    cout << "Enter the number: ";
    cin >> m;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t = t * 10 + m;
        sum=sum+t;
        cout << t << " ";

    }
    cout<<"Sum is: "<<sum;

    return 0;
}