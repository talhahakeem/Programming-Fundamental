#include <iostream>
using namespace std;
int main()
{
    int percentage;
    string gender, shift;
    cout << "Enter your Marks Percentage:";
    cin >> percentage;
    if (percentage >= 50)
    {
        cout << "Congratulations! You are Eligible for admission.\nPress 'Male' or 'Female' for gender recognition.\n";
        cout << "Enter your Gender:";
        cin >> gender;
        if (gender == "Male" || gender == "male")
        {
            cout << "Now you have to enter your shift 'Morning' or 'Evening'\n";
            cout << "Enter your Shift:";
            cin >> shift;
            if (shift == "Morning" || shift == "morning")
            {
                cout << "Sorry! Morning shift is only for Females.\n";
                cout << "Thank U";
            }
            else if (shift == "Evening" || shift == "evening ")
            {
                cout << "Selected\n";
            }
            else
            {
                cout << "YOU entered wrong input.";
            }
        }
        else if (gender == "Female" || gender == "female")
        {
            cout << "Now you have to enter your shift 'Morning' or 'Evening'\n";
            cout << "Enter your Shift:";
            cin >> shift;
            if (shift == "Morning" || shift == "morning")
            {
                cout << "CONGRATULATION! you are selected.\n";
            }
            else if (shift == "Evening" || shift == "evening ")
            {
                cout << "Sorry! Evening Shift is only for Males";
            }
            else
            {
                cout << "YOU entered wrong input.";
            }
        }
        else 
        {
            cout<<"You Entered Wrong gender.";
        }
        
    }
    else
        {
            cout << "Sorry! You are not eligible.";
        }
        return 0;
}
