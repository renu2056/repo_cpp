#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
    int account_number;
    string name;
    static int count_account;   // static declaration

public:
    // Constructor
    BankAccount(string n, int acc_num, double initial_balance = 0) {
        account_number = acc_num;
        name = n;
        if (initial_balance >= 0) {
            balance = initial_balance;
        } else {
            cout << "Invalid initial balance! Setting to 0.\n";
            balance = 0;
        }
        count_account++;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " deposited into Account " << account_number 
                 << " (" << name << ")\n";
        } else {
            cout << "Deposit amount must be positive!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " withdrawn from Account " << account_number 
                 << " (" << name << ")\n";
        } else {
            cout << "Invalid withdrawal! Not enough balance.\n";
        }
    }

    void display() {
        cout << "Account Holder: " << name 
             << " | Account Number: " << account_number 
             << " | Balance: " << balance << endl;
    }

    static void count_numberOf_accounts() {
        cout << "Total Accounts Created: " << count_account << endl;
    }

    // Friend function declaration
    friend void transferMoney(BankAccount &from, BankAccount &to, double amount);
};

// Define static member outside class
int BankAccount::count_account = 0;

// Friend function definition
void transferMoney(BankAccount &from, BankAccount &to, double amount) {
    if (amount > 0 && from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transferred " << amount 
             << " from Account " << from.account_number 
             << " to Account " << to.account_number << endl;
    } else {
        cout << "Transfer failed! Invalid amount or insufficient balance.\n";
    }
}

// Main function
int main() {
    BankAccount b1("Renu", 2006, 8560);
    BankAccount b2("Alix", 2004, 4003);
    BankAccount b3("Hermione", 2010, 2345);

    cout << "\n--- Initial Accounts ---\n";
    b1.display();
    b2.display();
    b3.display();

    b1.deposit(1000);
    b2.withdraw(500);
    transferMoney(b1, b3, 2000);

    cout << "\n--- Final Accounts ---\n";
    b1.display();
    b2.display();
    b3.display();

    BankAccount::count_numberOf_accounts();

    return 0;
}
