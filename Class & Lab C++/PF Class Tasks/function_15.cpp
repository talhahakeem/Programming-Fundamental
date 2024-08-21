#include <iostream>
using namespace std;
double balance = 0;
void deposit(double amount)
{
    balance = balance + amount;
    cout << "Deposit successful. Your new balance is: " << balance << endl;
}
void withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Insufficient balance." << endl;
    }
    else
    {
        balance = balance - amount;
        cout << "Withdrawal successful. Your new balance is: " << balance << endl;
    }
}
void checkBalance()
{
    cout << "Your balance is: " << balance << endl;
}
int main()
{
    int choice;
    double amount;
    do
    {
        cout << "Press 1 for Deposit money" << endl;
        cout << "Press 2 for Withdraw money" << endl;
        cout << "Press 3 for Check balance" << endl;
        cout << "Press 4 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdraw(amount);
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            cout << "Exit." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
