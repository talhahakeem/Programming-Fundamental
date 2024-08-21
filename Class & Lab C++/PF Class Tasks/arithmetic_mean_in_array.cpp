// program to calculate the Arithmetic mean.
#include <iostream>
using namespace std;
int main()
{
    int num, array[50], sum = 0;
    cout << "How Many Numbers You Want to Enter? : ";
    cin >> num;
    cout << "Enter " << num << " Numbers :" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    int ar_mean = sum / num;
    cout << "Arithmetic Mean = " << ar_mean;
    return 0;
}