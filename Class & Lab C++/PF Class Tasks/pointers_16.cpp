#include <iostream>
using namespace std;
void checkEvenOdd(int *num)
{
    if (*num % 2 == 0)
        cout << *num << " is even." << endl;
    else
        cout << *num << " is odd." << endl;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    checkEvenOdd(&n);
    return 0;
}
