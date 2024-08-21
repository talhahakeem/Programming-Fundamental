#include <iostream>
using namespace std;
int main()
{
    int age, income;
    cout << "ENTER THE AGE:";
    cin >> age;
    cout << "ENTER THE INCOME:";
    cin >> income;
    if (age < 18 && income < 10000)
    {
        cout << "YOU ARE ELIGIBLE.";
    }
    else if (age > 18 && age < 25 && income < 25000)
    {
        cout << "YOU ARE ELIGIBLE.";
    }
    else
    {
        cout << "YOU ARE NOT ELIGIBLE.";
    }
    return 0;
}
