#include <iostream>
using namespace std;
int main()
{
    int a, b, gcd,LCM;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "enter the Second number: ";
    cin >> b;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD of Two Numbers is: " << gcd<<endl;
    for (int i = a; i <=a*b; i++)
    {
        if (i%a==0 || i%b==0 )
        {
           LCM=i;
        }
        
    }
    cout << "LCM of Two Numbers is: " << LCM;

    


    return 0;
}