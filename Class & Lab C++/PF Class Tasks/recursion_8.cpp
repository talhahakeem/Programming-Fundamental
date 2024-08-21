#include <iostream>
using namespace std;
void decresing(int n)
{
   if (n == 0)
    {
        return;
    }
    cout << n << endl;
    decresing(n - 1);
}
void incresing(int n)
{
    if (n == 0)
    {
        return;
    }
    incresing(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter The Number till you print the numbers in decresing order: ";
    cin >> n;
    cout << "Numbers in Decresing Order: " << endl;
    decresing(n);
    cout << "Numbers in Incresing Order: " << endl;
    incresing(n);

    return 0;
}