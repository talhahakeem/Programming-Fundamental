#include <iostream>
using namespace std;
int rooms_num= 10;
void displayMenu()
{
    cout << "Hotel Management System: \n";
    cout << "Press 1 to Book a room \n";
    cout << "press 2 to Exit\n";
}
void initializeRooms(bool rooms[], int numRooms)
{
    for (int i = 0; i < numRooms; i++)
    {
        rooms[i] = false;
    }
}
void bookRoom(bool rooms[], int numRooms)
{
    int roomNumber;
    cout << "Enter the room number you want to book: ";
    cin >> roomNumber;
    if (roomNumber >= 1 && roomNumber <= numRooms)
    {
        if (!rooms[roomNumber - 1])
        {
            rooms[roomNumber - 1] = true;
            cout << "Room " << roomNumber << " booked successfully.\n";
        }
        else
        {
            cout << "Sorry, room " << roomNumber << " is already booked.\n";
        }
    }
    else
    {
        cout << "Invalid room number.\n";
    }
}
int main()
{

    bool rooms[rooms_num];
    initializeRooms(rooms,rooms_num);

    char choice;
    do
    {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case '1':
            bookRoom(rooms, rooms_num);
            break;
        case '2':
            cout << "Exiting program. Thank you!\n";
            break;
        default:
        cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != '2');


}

