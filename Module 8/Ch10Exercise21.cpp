#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class bankAccount
{
private:
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;
    double interestRate;

    static int nextAccountNumber;

public:
    // Constructor
    bankAccount()
    {
        accountHolder = "";
        accountNumber = nextAccountNumber++;
        accountType = "";
        balance = 0.0;
        interestRate = 0.0;
    }

    // Set account information
    void setAccount(string name, string type,
                    double amount, double rate)
    {
        accountHolder = name;
        accountType = type;
        balance = amount;
        interestRate = rate;
    }

    // Deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    // Withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Calculate and add interest
    void addInterest()
    {
        balance += balance * interestRate;
    }

    // Display account information
    void displayAccount() const
    {
        cout << fixed << setprecision(2);

        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: "
             << interestRate * 100 << "%" << endl;
    }
};

// Initialize static member
int bankAccount::nextAccountNumber = 1001;

int main()
{
    const int SIZE = 10;
    bankAccount accounts[SIZE];

    int numberOfCustomers;

    cout << "Enter number of customers (1-10): ";
    cin >> numberOfCustomers;

    if (numberOfCustomers < 1 || numberOfCustomers > 10)
    {
        cout << "Invalid number of customers." << endl;
        return 1;
    }

    for (int i = 0; i < numberOfCustomers; i++)
    {
        string name, type;
        double balance, rate;

        cout << "\nEnter information for customer "
             << i + 1 << endl;

        cout << "Account holder name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Account type (checking/savings): ";
        cin >> type;

        cout << "Initial balance: $";
        cin >> balance;

        cout << "Interest rate (decimal, e.g. 0.05): ";
        cin >> rate;

        if (balance < 0 || rate < 0)
        {
            cout << "Invalid balance or interest rate." << endl;
            return 1;
        }

        accounts[i].setAccount(name, type, balance, rate);
    }

    // Demonstrate account operations
    cout << "\n--- Account Operations ---" << endl;

    double depositAmount;
    cout << "Enter deposit amount for first account: $";
    cin >> depositAmount;

    accounts[0].deposit(depositAmount);

    double withdrawalAmount;
    cout << "Enter withdrawal amount for first account: $";
    cin >> withdrawalAmount;

    accounts[0].withdraw(withdrawalAmount);

    // Add interest to each active account
    for (int i = 0; i < numberOfCustomers; i++)
    {
        accounts[i].addInterest();
    }

    // Display account information
    cout << "\n--- Account Summary ---" << endl;

    for (int i = 0; i < numberOfCustomers; i++)
    {
        accounts[i].displayAccount();
    }

    return 0;
}
