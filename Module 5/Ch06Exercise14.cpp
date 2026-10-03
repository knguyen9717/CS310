#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calculateBilling(double hourlyRate, int consultingTime, bool lowIncome);

int main()
{
    double hourlyRate;
    int consultingTime;
    char incomeStatus;

    cout << "Enter the hourly rate: $";
    cin >> hourlyRate;

    cout << "Enter the consulting time in minutes: ";
    cin >> consultingTime;

    cout << "Does the person have low income? (Y/N): ";
    cin >> incomeStatus;

    if (hourlyRate < 0 || consultingTime < 0)
    {
        cout << "Invalid input." << endl;
        return 1;
    }

    bool lowIncome = (incomeStatus == 'Y' || incomeStatus == 'y');

    double billingAmount =
        calculateBilling(hourlyRate, consultingTime, lowIncome);

    cout << fixed << setprecision(2);
    cout << "Billing amount: $" << billingAmount << endl;

    return 0;
}

// Calculates and returns the billing amount
double calculateBilling(double hourlyRate, int consultingTime, bool lowIncome)
{
    double billingAmount = 0.0;

    if (lowIncome)
    {
        if (consultingTime > 30)
        {
            billingAmount = hourlyRate * 0.40
                          * ((consultingTime - 30) / 60.0);
        }
    }
    else
    {
        if (consultingTime > 20)
        {
            billingAmount = hourlyRate * 0.70
                          * ((consultingTime - 20) / 60.0);
        }
    }

    return billingAmount;
}
