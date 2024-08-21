#include <iostream>
#include <string>

using namespace std;

struct Person {
    int id;
    string name;
    int age;
    string address;
};

void addPerson(Person people[], int& count, int numToAdd) {
    if (count + numToAdd <= 50) {
        for (int i = 0; i < numToAdd; ++i) {
            cout << "Enter ID for person " << i + 1 + count << ": ";
            cin >> people[count + i].id;
            cout << "Enter name for person " << i + 1 + count << ": ";
            cin >> people[count + i].name;
            cout << "Enter age for person " << i + 1 + count << ": ";
            cin >> people[count + i].age;
            cout << "Enter address for person " << i + 1 + count << ": ";
            cin >> people[count + i].address;
        }
        count += numToAdd;
        cout << numToAdd << " person(s) added successfully." << endl;
    } else {
        cout << "Sorry, you can only add data for up to " << 50 - count << " person(s)." << endl;
    }
}

void editPerson(Person people[], int count) {
    if (count > 0) {
        int id;
        cout << "Enter the ID of the person you want to edit: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < count; ++i) {
            if (people[i].id == id) {
                cout << "Enter new name: ";
                cin >> people[i].name;
                cout << "Enter new age: ";
                cin >> people[i].age;
                cout << "Enter new address: ";
                cin >> people[i].address;
                cout << "Person data edited successfully." << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Person with ID " << id << " not found." << endl;
    } else {
        cout << "No data available to edit." << endl;
    }
}

int main() {
    Person people[50];
    int count = 0;
    int choice;

    cout << "Welcome to Society Management Project" << endl;

    do {
        cout << "\nMenu:\n1. Add Person\n2. Edit Person Data\n3. Quit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int numToAdd;
                cout << "Enter the number of people you want to add (between 1 and 50): ";
                cin >> numToAdd;
                if (numToAdd < 1 || numToAdd > 50) {
                    cout << "Please enter a number between 1 and 50." << endl;
                    break;
                }
                addPerson(people, count, numToAdd);
                break;
            }
            case 2:
                editPerson(people, count);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

