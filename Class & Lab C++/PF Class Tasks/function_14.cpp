#include <iostream>
using namespace std;

int id;
string title, author;
void addBook()
{
    cout << "Enter book ID: ";
    cin >> id;
    cout << "Enter book title: ";
    cin >> title;
    cout << "Enter author name: ";
    cin >> author;
}
void displayBook()
{
    cout << "Book ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
}

int main()
{
    addBook();
    displayBook();
    return 0;
}
