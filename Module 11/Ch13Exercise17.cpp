#include <iostream>
#include <iomanip>
#include <random>
#include <stdexcept>
using namespace std;

int main()
{
    // Create a random number generator
    random_device rd;
    mt19937 generator(rd());

    // Generate real numbers between 10 and 100
    uniform_real_distribution<double> distribution(10.0, 100.0);

    int exceptionCount = 0;

    cout << fixed << setprecision(2);
    cout << "Random Number Generator with Exception Handling\n";
    cout << "-----------------------------------------------\n";

    // Generate 25 random numbers
    for (int i = 1; i <= 25; i++)
    {
        double number = distribution(generator);

        cout << "Number " << setw(2) << i
             << ": " << setw(6) << number;

        try
        {
            // Throw an exception for numbers between 40 and 60
            if (number >= 40.0 && number <= 60.0)
            {
                throw runtime_error("Number is between 40 and 60");
            }

            cout << " - Accepted" << endl;
        }
        catch (const runtime_error& error)
        {
            exceptionCount++;

            cout << " - Exception: "
                 << error.what() << endl;
        }
    }

    cout << "\nTotal numbers generated: 25" << endl;
    cout << "Total exceptions caught: "
         << exceptionCount << endl;

    return 0;
}
