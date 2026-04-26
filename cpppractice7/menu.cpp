#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    double balance;

public:
    // Constructor to initialize an account
    Bank(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited successfully! New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn successfully! New balance: $" << balance << endl;
        } else {
            cout << "Error: Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "-----------------------\n" << endl;
    }
};

int main() {
    Bank myAccount("John Doe", 1000.0);
    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose an option: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter deposit amount: $";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.display();
                break;
            case 4:
                cout << "Exiting system. Have a great day!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}