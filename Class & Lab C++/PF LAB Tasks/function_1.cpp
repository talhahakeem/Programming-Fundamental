#include <iostream>
using namespace std;
void marks()
{
    string A[2][4] = {{"TALHA", "40", "50", "60"}, {"AHMAD", "70", "80", "90"}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    marks();

    return 0;
}