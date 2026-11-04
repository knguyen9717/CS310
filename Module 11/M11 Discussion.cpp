#include <iostream>
#include <stdexcept>
using namespace std;

// Class template
template <typename T>
class BankAccount
{
private:
    T balance;

public:
    BankAccount(T amount)
    {
        balance = amount;
    }

    // Overloaded + operator
    BankAccount operator+(const BankAccount& other) const
    {
        return BankAccount(balance + other.balance);
    }

    // Member function with exception handling
    void withdraw(T amount)
    {
        try
        {
            if (amount > balance)
            {
                throw runtime_error("Insufficient funds!");
            }

            balance -= amount;
        }
        catch (const runtime_error& error)
        {
            cout << error.message() << endl;
        }
    }

    void displayBalance() const
    {
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount<double> account1(100.0);
    BankAccount<double> account2(50.0);

    BankAccount<double> total = account1 + account2;

    total.withdraw(200.0);

    total.displayMoney();

    return 0;
}
