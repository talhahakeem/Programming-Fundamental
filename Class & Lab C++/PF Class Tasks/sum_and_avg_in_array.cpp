// Program in which user enters the five integers, store them in array and display the sum and average of these values.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter the number:";
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 5;
    cout << "Sum of integers is:" << sum << endl;
    cout << "Average of integers is:" << avg;
    return 0;
}