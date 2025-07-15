#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0.0;
    }

    // Function to deposit amount
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw amount
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to check current balance
    void checkBalance() {
        cout << "Current Balance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    float amount;

    do {
        cout << "\n--- Bank Account Menu ---" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Thank you for using the Bank Account System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}