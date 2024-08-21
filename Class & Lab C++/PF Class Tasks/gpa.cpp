#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    float sum = 0.0, average;
    int y;
    string grades;

    string totalStudents[10] = {"Malcolm 'Mal' Reynolds", "Inara Serra", "River Tam", "Kaylee Frye", "Zoe Washburne", "Jayne Cobb", "Hoban 'Wash' Washburne", "Simon Tam", "Shepherd Derrial Book", "Mr. Universe"};

    for (int i = 0; i < sizeof(totalStudents); i++)
    {

        sum = 0.0; // reset the sum for each student

        cout << "Please enter grades for " << totalStudents[i] << endl;

        for (int y = 0; y < 10; y++)
        {

            cout << "Enter letter grade " << y + 1 << ": " << endl;
            cin >> grades;

            if (grades == "A" || grades == "a")
            {
                sum += 4.0;
            }
            else if (grades == "B" || grades == "b")
            {
                sum += 3.0;
            }
            else if (grades == "C" || grades == "c")
            {
                sum += 2.0;
            }
            else if (grades == "D" || grades == "d")
            {
                sum += 1.0;
            }
            else if (grades == "F" || grades == "f")
            {
                sum += 0.0;
            }
        }

        average = sum / 10.0;
        cout << totalStudents[i] << " GPA is : " << fixed << setprecision(1) << average << endl
             << endl;
    }
}