#include <iostream>
using namespace std;

enum days {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main()
{
    days today = MONDAY;

    today++;

    today = today + 2;

    cout << "Program finished." << endl;

    return 0;
}
