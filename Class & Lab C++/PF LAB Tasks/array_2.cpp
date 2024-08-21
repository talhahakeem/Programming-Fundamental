#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    cout << "ENTER THE ELEMENTS OF ARRAY:\n";
    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];
    cout << "Your Entered Array Elements are:\n";
    cout << A[0] << endl;
    cout << A[1] << endl;
    cout << A[2] << endl;
    cout << A[3] << endl;
    cout << A[4];
    return 0;
}