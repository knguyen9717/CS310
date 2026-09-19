#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter your test score: ";
    cin >> score;

    if (score >= 70)
    {
        cout << "You passed!" << endl
    }
    else
    {
        cout << "You did not pass!" << endl;
    }

    return 0
}
