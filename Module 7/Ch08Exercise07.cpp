
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;

    string candidates[SIZE];
    int votes[SIZE];
    int totalVotes = 0;
    int winnerIndex = 0;

    // Enter candidate names and votes
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter last name of candidate " << i + 1 << ": ";
        cin >> candidates[i];

        cout << "Enter votes received: ";
        cin >> votes[i];

        if (votes[i] < 0)
        {
            cout << "Invalid number of votes." << endl;
            return 1;
        }

        totalVotes += votes[i];
    }

    // Find the candidate with the most votes
    for (int i = 1; i < SIZE; i++)
    {
        if (votes[i] > votes[winnerIndex])
        {
            winnerIndex = i;
        }
    }

    // Display election results
    cout << "\nElection Results\n\n";

    cout << left << setw(18) << "Candidate"
         << right << setw(18) << "Votes Received"
         << setw(20) << "% of Total Votes" << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < SIZE; i++)
    {
        double percentage = 0.0;

        if (totalVotes > 0)
        {
            percentage = static_cast<double>(votes[i])
                         / totalVotes * 100;
        }

        cout << left << setw(18) << candidates[i]
             << right << setw(18) << votes[i]
             << setw(20) << percentage << endl;
    }

    cout << left << setw(18) << "Total"
         << right << setw(18) << totalVotes << endl;

    if (totalVotes > 0)
    {
        cout << "\nThe winner of the election is "
             << candidates[winnerIndex] << "." << endl;
    }
    else
    {
        cout << "\nNo winner: no votes were received." << endl;
    }

    return 0;
}

