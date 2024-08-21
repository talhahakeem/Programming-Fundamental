#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    float percentage, sum = 0;
    cout << "Enter Marks of 5 Subjects of Student (0-100):\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }
    percentage = (sum / 500) * 100;
    cout << "Percentage = " << percentage << " %";
    return 0;
}