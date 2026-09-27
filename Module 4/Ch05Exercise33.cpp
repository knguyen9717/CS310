#include <iostream>
using namespace std;

int main()
{
    int a, b, t;

    cout << "Enter the time needed to prepare the first dish: ";
    cin >> a;

    cout << "Enter the additional time needed for each following dish: ";
    cin >> b;

    cout << "Enter the total time available: ";
    cin >> t;

    if (a <= 0 || b < 0 || t < 0)
    {
        cout << "Invalid input." << endl;
        return 1;
    }

    int dishes = 0;
    int timeUsed = 0;
    int nextDishTime = a;

    while (timeUsed + nextDishTime <= t)
    {
        timeUsed = timeUsed + nextDishTime;
        dishes++;

        nextDishTime = nextDishTime + b;
    }

    cout << "\nBianca can prepare " << dishes
         << " dishes." << endl;

    return 0;
}
