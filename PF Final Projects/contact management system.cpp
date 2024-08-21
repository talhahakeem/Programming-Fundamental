#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX_CONTACTS = 100; 
string names[MAX_CONTACTS];
 string phones[MAX_CONTACTS];
string emails[MAX_CONTACTS];
int contactCount = 0; 

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        cout << "Contact list is full." << endl;
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Enter name: ";
    getline(cin, names[contactCount]);

    cout << "Enter phone: ";
    getline(cin, phones[contactCount]);

    cout << "Enter email: ";
    getline(cin, emails[contactCount]);

    contactCount++;
    cout << "Contact added." << endl;
}

void displayContacts() {
    for (int i = 0; i < contactCount; i++) {
        cout << "Name: " << names[i] << ", Phone: " << phones[i] << ", Email: " << emails[i] << endl;
    }
}

void searchContact() {
    string searchTerm;
    cout << "Enter name to search: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, searchTerm);

    bool found = false;
    for (int i = 0; i < contactCount; i++) {
        if (names[i] == searchTerm) {
            cout << "Name: " << names[i] << ", Phone: " << phones[i] << ", Email: " << emails[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void deleteContact() {
    string nameToDelete;
    cout << "Enter name of contact to delete: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, nameToDelete);

    bool found = false;
    for (int i = 0; i < contactCount; i++) {
        if (names[i] == nameToDelete) {
            for (int j = i; j < contactCount - 1; j++) {
                names[j] = names[j + 1];
                phones[j] = phones[j + 1];
                emails[j] = emails[j + 1];
            }
            contactCount--;
            cout << "Contact deleted." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Contact" << endl;
        cout << "2. Display Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}

