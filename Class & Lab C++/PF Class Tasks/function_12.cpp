#include <iostream>
using namespace std;
void marks();
int main()
{
    marks();
    return 0;
}
void marks()
{
    int a, b, c, d, e, total, avg;
    cout << "Enter Subject 1 Marks : ";
    cin >> a;
    cout << "Enter Subject 2 Marks : ";
    cin >> b;
    cout << "Enter Subject 3 Marks : ";
    cin >> c;
    cout << "Enter Subject 4 Marks : ";
    cin >> d;
    cout << "Enter Subject 5 Marks : ";
    cin >> e;
    total = a + b + c + d + e;
    avg = total / 5;
    cout << "\nTotal Marks:" << total;
    cout << "\nAverage:" << avg;
    if (total > 250)
    {
        if (total >= 480)
        {
            cout << "\nGrade:A";
        }
        else if (total > 400 && total < 480)
        {
            cout << "\nGrade:B";
        }
        else if (total < 400)
        {
            cout << "\nGrade:C";
        }
        cout << "\nPass";
    }
    else
    {
        cout << "\nFail";
    }
}
