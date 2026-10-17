#include <iostream>
using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    Day today = Thursday;

    cout << "Today is ";

    switch (today) {
        case Monday:
            cout << "Monday";
            break;
        case Tuesday:
            cout << "Tuesday";
            break;
        case Wednesday:
            cout << "Wednesday";
            break;
        case Thursday:
            cout << "Thursday";
            break;
        case Friday:
            cout << "Friday";
            break;
        case Saturday:
            cout << "Saturday";
            break;
        case Sunday:
            cout << "Sunday";
            break;
    }

    cout << endl;

    return 0;
}
