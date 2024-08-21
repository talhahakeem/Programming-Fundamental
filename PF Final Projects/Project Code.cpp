#include <iostream>
using namespace std;

void displayMenu();
void takeOrder(int menu[], int order[]);
void calculateTotal(int menu[], int order[]);
void displayOrder(int menu[], int order[]);

int main() {
    const int MENU_SIZE = 7;
    int menu[MENU_SIZE] = {10, 15, 12, 8, 6, 20, 18};
    int order[MENU_SIZE] = {0};

    int choice;
    do {
        cout << "Welcome to the Restaurant Management System" << endl;
        cout << "1. Display Menu" << endl;
        cout << "2. Take Order" << endl;
        cout << "3. Display Order" << endl;
        cout << "4. Calculate Total" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                takeOrder(menu, order);
                break;
            case 3:
                displayOrder(menu, order);
                break;
            case 4:
                calculateTotal(menu, order);
                break;
            case 5:
                cout << "Thank you for using the Restaurant Management System" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Burger - $10" << endl;
    cout << "2. Pizza - $15" << endl;
    cout << "3. Sandwich - $12" << endl;
    cout << "4. Salad - $8" << endl;
    cout << "5. Drink - $6" << endl;
    cout << "6. Biryani - $20" << endl;
    cout << "7. Karahi - $18" << endl;
}

void takeOrder(int menu[], int order[]) {
    int item, quantity;
    cout << "Enter the item number you want to order: ";
    cin >> item;
    cout << "Enter the quantity: ";
    cin >> quantity;

    if (item >= 1 && item <= 7) {
        order[item - 1] += quantity;
        cout << "Order added successfully!" << endl;
    } else {
        cout << "Invalid item number." << endl;
    }
}

void calculateTotal(int menu[], int order[]) {
    int total = 0;
    for (int i = 0; i < 7; i++) {
        total += menu[i] * order[i];
    }
    cout << "Total amount: $" << total << endl;
}

void displayOrder(int menu[], int order[]) {
    cout << "Your Order:" << endl;
    for (int i = 0; i < 7; i++) {
        if (order[i] > 0) {
            cout << "Item " << i + 1 << ": " << order[i] << " x $" << menu[i] << " = $" << order[i] * menu[i] << endl;
        }
    }
}