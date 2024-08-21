#include <iostream>
using namespace std;
void modifyValue(int *ptr)
{
    *ptr += 10;
}
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "Original Value: " << num << endl;
    modifyValue(&num);
    cout << "Modified Value: " << num << endl;
    return 0;
}
