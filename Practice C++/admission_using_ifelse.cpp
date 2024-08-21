#include <iostream>
using namespace std;
int main()
{
    int sub_1, sub_2, sub_3, avg;
    cout << "ENTER YOUR sub_1 Marks:";
    cin >> sub_1;
    cout << "ENTER YOUR sub_2 Marks:";
    cin >> sub_2;
    cout << "ENTER YOUR sub_2 Marks:";
    cin >> sub_3;

    avg = sub_1 + sub_2 + sub_3 / 3;

    if (avg >= 80)
    {
        cout << "YOU ARE ABOVE STANDARD.";
        cout << "YOU HAVE GRANTED ADMISSION.";
    }
    else
    {
        cout << "SORRY!YOH COULD NOT GOT ADMISSION.";
    }

    return 0;
}