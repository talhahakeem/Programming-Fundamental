// program that input the age of different person and count the number of person in the age group 50 and 60.
#include <iostream>
using namespace std;
int main()
{
    int age[10], n, count = 0;
    cout << "Enter the number of persons required:";
    cin >> n;
    cout << "Enter the age of " << n << " persons." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> age[i];
        if (age[i] >= 50 && age[i] <= 60)
        {
            count += 1;
        }
    }
    cout << "number of persons between the age group 50 & 60 are : " << count;

    return 0;
}