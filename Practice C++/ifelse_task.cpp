#include <iostream>
using namespace std;
int main()
{

    int acc_num, min;
    float rate;
    char ser_code;
    string shift;
    cout << "Enter Account Number: ";
    cin >> acc_num;
    cout << "Enter the Survice Code: ";
    cin >> ser_code;
    cout << "Enter the Number of Minutes: ";
    cin >> min;
    if (ser_code == 'r' || ser_code == 'R')
    {
        cout << endl
             << endl;
        if (min <= 50)
        {
            cout << "You have charged $10.00.";
        }
        else if (min > 50)
        {
            rate = min - 50;
            rate *= 0.20;
            cout << "Your Account Number is: " << acc_num << endl;
            cout << "Your Over minutes are: " << min - 50;
            cout << endl;
            cout << "Due to Over-Time You have Charged $0.20 per minute is: " << rate << "$";
            cout << endl;
            cout << "The Total amount is: " << 10 + rate << "$"; 
        }
        else
        {
            cout << "Invalid Input.";
        }
    }
    else if (ser_code == 'p' || ser_code == 'P')
    {
        cout << endl
             << endl;
        cout << "Enter Your Shift ==> Day or Night: ";
        cin >> shift;
        if (shift == "day" || shift == "Day")
        {
            if (min <= 75)
            {
                cout << "You have Charged $25.00.";
            }
            else if (min > 75)
            {
                rate = min - 75;
                rate *= 0.10;
                cout << "Your Account Number is: " << acc_num << endl;
                cout << "Your Over minutes are: " << min - 75;
                cout << endl;
                cout << "Due to Over-Time You have Charged $0.10 per minute is: " << rate << "$";
                cout << endl;
                cout << "The Total amount is: " << 25 + rate << "$";
            }
            else
            {
                cout << "Invalid Input.";
            }
        }
        else if (shift == "night" || shift == "Night")
        {

            if (min <= 100)
            {
                cout << "You have Charged $25.00.";
            }
            else if (min > 100)
            {
                rate = min - 100;
                rate *= 0.05;
                cout << "Your Account Number is: " << acc_num << endl;
                cout << "Your Over minutes are: " << min - 100;
                cout << endl;
                cout << "Due to Over-Time You have Charged $0.05 per minute is: " << rate << "$";
                cout << endl;
                cout << "The Total amount is: " << 25 + rate << "$";
            }
            else
            {
                cout << "Invalid Input.";
            }
        }
        else
        {
            cout << "Invalid Shift.";
        }
    }
    else
    {
        cout << "Invalid Service Code.";
    }

    return 0;
}




