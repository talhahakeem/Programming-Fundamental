#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number of Patients: ";
    cin >> num;
    string *patientNames = new string[num];
    int *patientAges = new int[num];
    string *patientDiseases = new string[num];
    string *patientContactNumbers = new string[num];
        for (int i = 0; i < num; i++)
    {
        cout << "Enter patient " << (i + 1) << " name: ";
        cin >> patientNames[i];
        cout << "Enter patient " << (i + 1) << " age: ";
        cin >> patientAges[i];
        cout << "Enter patient " << (i + 1) << " disease: ";
        cin >> patientDiseases[i];
        cout << "Enter patient " << (i + 1) << " contact number: ";
        cin >> patientContactNumbers[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Patient " << (i + 1) << " Name: " << patientNames[i] << ", Age: " << patientAges[i] << ", Disease: " << patientDiseases[i] << ", Contact Number: " << patientContactNumbers[i] << endl;
    }
    return 0;
}
