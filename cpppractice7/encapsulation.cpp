#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Hidden data

public:
    BankAccount() { balance = 0.0; } // Constructor

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.deposit(500);
    myAccount.withdraw(200);
    cout << "Current Balance: $" << myAccount.getBalance() << endl;
    return 0;
}