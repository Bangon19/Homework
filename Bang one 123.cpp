#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    BankAccount(const string& owner) {
        this->owner = owner;
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdrawal(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount." << endl;
        }
    }

    void displayBalance() const {
        cout << "Balance: $" << balance << endl;
    }

private:
    double balance;
    string owner;
};

int main() {
    BankAccount account("John Doe");
    account.deposit(500);
    account.withdrawal(200);
    account.displayBalance();
    account.withdrawal(1200);
    account.displayBalance();

    return 0;
}

