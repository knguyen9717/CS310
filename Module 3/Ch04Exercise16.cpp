
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Named constants for the three contract options
    const double DELIVERY_PAYMENT = 5000.00;
    const double PUBLICATION_PAYMENT = 20000.00;
    const double OPTION_TWO_RATE = 0.125;
    const double OPTION_THREE_FIRST_RATE = 0.10;
    const double OPTION_THREE_EXTRA_RATE = 0.14;
    const int COPY_LIMIT = 4000;

    double netPrice;
    int copiesSold;

    // Get the author's estimates
    cout << "Enter the net price of each copy: $";
    cin >> netPrice;

    cout << "Enter the estimated number of copies sold: ";
    cin >> copiesSold;

    // Check for invalid input
    if (!cin || netPrice < 0 || copiesSold < 0)
    {
        cout << "Invalid input. Enter a nonnegative price "
             << "and number of copies." << endl;
        return 1;
    }

    // Calculate royalties for each option
    double optionOne = DELIVERY_PAYMENT + PUBLICATION_PAYMENT;

    double optionTwo = netPrice * copiesSold * OPTION_TWO_RATE;

    double optionThree;

    if (copiesSold <= COPY_LIMIT)
    {
        optionThree = netPrice * copiesSold
                    * OPTION_THREE_FIRST_RATE;
    }
    else
    {
        optionThree = netPrice * COPY_LIMIT
                    * OPTION_THREE_FIRST_RATE
                    + netPrice * (copiesSold - COPY_LIMIT)
                    * OPTION_THREE_EXTRA_RATE;
    }

    // Display the estimated royalties
    cout << fixed << setprecision(2);

    cout << "\nEstimated royalties:" << endl;
    cout << "Option 1: $" << optionOne << endl;
    cout << "Option 2: $" << optionTwo << endl;
    cout << "Option 3: $" << optionThree << endl;

    // Find the highest royalty amount
    double bestRoyalty = optionOne;

    if (optionTwo > bestRoyalty)
    {
        bestRoyalty = optionTwo;
    }

    if (optionThree > bestRoyalty)
    {
        bestRoyalty = optionThree;
    }

    // Report all options tied for the highest amount
    cout << "\nBest option based on estimated royalties: ";

    if (optionOne == bestRoyalty)
    {
        cout << "Option 1 ";
    }

    if (optionTwo == bestRoyalty)
    {
        cout << "Option 2 ";
    }

    if (optionThree == bestRoyalty)
    {
        cout << "Option 3 ";
    }

    cout << "\nHighest estimated royalties: $"
         << bestRoyalty << endl;

    return 0;
}