#include <iostream>
using namespace std;
float patient(int days, float rate, float medcharges, float HScharges);
int main()
{
    int days;
    float rate, medcharges, HScharges;
    float total;
    cout << "Number of days spent in the hospital: ";
    cin >> days;
    cout << "Daily rate: ";
    cin >> rate;
    cout << "Hospital  medication charges: ";
    cin >> medcharges;
    cout << "Charges for hospital services: ";
    cin >> HScharges;
    total = patient(days, rate, medcharges, HScharges);
    cout << "Patient total charges:" << total;
    return 0;
}
float patient(int days, float rate, float medcharges, float HScharges)
{
    float totalcharges;
    totalcharges = (days * rate) + medcharges + HScharges;
    return totalcharges;
}