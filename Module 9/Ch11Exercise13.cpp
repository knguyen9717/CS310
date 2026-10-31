#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class bankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    bankAccount(int number = 0, double amount = 0.0)
    {
        accountNumber = number;
        balance = amount;
    }

    void setAccountNumber(int number)
    {
        accountNumber = number;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    virtual void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal." << endl;
    }

    virtual void printAccount() const
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    virtual ~bankAccount() = default;
};

// Derived checking account
class checkingAccount : public bankAccount
{
private:
    double interestRate;
    double minimumBalance;
    double serviceCharge;

public:
    checkingAccount(int number = 0, double amount = 0.0,
                    double rate = 0.0, double minimum = 0.0,
                    double charge = 0.0)
        : bankAccount(number, amount)
    {
        interestRate = rate;
        minimumBalance = minimum;
        serviceCharge = charge;
    }

    void setInterestRate(double rate)
    {
        if (rate >= 0)
            interestRate = rate;
    }

    double getInterestRate() const
    {
        return interestRate;
    }

    void setMinimumBalance(double amount)
    {
        if (amount >= 0)
            minimumBalance = amount;
    }

    double getMinimumBalance() const
    {
        return minimumBalance;
    }

    void setServiceCharge(double amount)
    {
        if (amount >= 0)
            serviceCharge = amount;
    }

    double getServiceCharge() const
    {
        return serviceCharge;
    }

    bool isBelowMinimum() const
    {
        return balance < minimumBalance;
    }

    void withdraw(double amount) override
    {
        if (amount <= 0 || amount > balance)
        {
            cout << "Invalid withdrawal." << endl;
            return;
        }

        balance -= amount;

        if (isBelowMinimum() && serviceCharge <= balance)
            balance -= serviceCharge;
    }

    void writeCheck(double amount)
    {
        withdraw(amount);
    }

    void printAccount() const override
    {
        cout << "\n--- Checking Account ---" << endl;
        bankAccount::printAccount();
        cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
        cout << "Minimum Balance: $" << minimumBalance << endl;
        cout << "Service Charge: $" << serviceCharge << endl;
    }
};

// Derived savings account
class savingsAccount : public bankAccount
{
private:
    double interestRate;

public:
    savingsAccount(int number = 0, double amount = 0.0,
                   double rate = 0.0)
        : bankAccount(number, amount)
    {
        interestRate = rate;
    }

    void setInterestRate(double rate)
    {
        if (rate >= 0)
            interestRate = rate;
    }

    double getInterestRate() const
    {
        return interestRate;
    }

    void postInterest()
    {
        balance += balance * interestRate;
    }

    void withdraw(double amount) override
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal." << endl;
    }

    void printAccount() const override
    {
        cout << "\n--- Savings Account ---" << endl;
        bankAccount::printAccount();
        cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
    }
};

int main()
{
    cout << fixed << setprecision(2);

    checkingAccount checking(1001, 1000.00, 0.02, 500.00, 10.00);
    savingsAccount savings(2001, 2000.00, 0.05);

    // Test checking account
    checking.deposit(200.00);
    checking.writeCheck(800.00);
    checking.printAccount();

    // Test savings account
    savings.deposit(500.00);
    savings.withdraw(300.00);
    savings.postInterest();
    savings.printAccount();

    return 0;
}
