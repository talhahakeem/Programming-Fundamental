#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
void displayMenu();
void performConversion(int choice);

int main() {
    char again;

    do {
        displayMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        performConversion(choice);

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}

void displayMenu() {
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Kelvin to Fahrenheit" << endl;
    cout << "6. Fahrenheit to Kelvin" << endl;
}

void performConversion(int choice) {
    double temperature;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << celsiusToFahrenheit(temperature) << " °F" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << fixed << setprecision(2) << fahrenheitToCelsius(temperature) << " °C" << endl;
            break;
        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Kelvin: " << fixed << setprecision(2) << celsiusToKelvin(temperature) << " K" << endl;
            break;
        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << fixed << setprecision(2) << kelvinToCelsius(temperature) << " °C" << endl;
            break;
        case 5:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << kelvinToFahrenheit(temperature) << " °F" << endl;
            break;
        case 6:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Kelvin: " << fixed << setprecision(2) << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        default:
            cout << "Invalid choice! Please choose a number from 1 to 6." << endl;
    }
}

// Conversion functions

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9 / 5 - 459.67;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}
