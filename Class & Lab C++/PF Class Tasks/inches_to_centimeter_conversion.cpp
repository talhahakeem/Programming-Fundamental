#include<iostream>
using namespace std;
int main()
{
    //declare variables
 float heightInInches, heightInCentimeters;
    // Get the  height in inches as input from the user
    cout << "Enter your height in inches: ";
    cin >> heightInInches;
    // Convert inches to centimeters (1 inch = 2.54 cm)
    heightInCentimeters = heightInInches * 2.54;
    // Display the height in centimeters
    cout << "Your height in centimeters is: " << heightInCentimeters << " cm" ;
    return 0;
}