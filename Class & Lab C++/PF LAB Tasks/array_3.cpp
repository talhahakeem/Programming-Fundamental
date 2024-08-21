#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    cout << "ENTER THE ELEMENTS OF ARRAY: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    cout << "YOUR ENTERED ARRAY ELEMENTS ARE: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}