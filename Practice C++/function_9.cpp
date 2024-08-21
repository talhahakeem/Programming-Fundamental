#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n, m;
    cout << "Enter the two numbers: ";
    cin >> n >> m;
    cout << "Numbers before Swapping: \n";
    cout << " n= " << n << " , "
                           " m= "
         << m << endl;
    swap(n, m);
    cout << "Numbers after Swapping: \n";
    cout << " n= " << n << " , "
                           " m= "
         << m << endl;

    return 0;
}