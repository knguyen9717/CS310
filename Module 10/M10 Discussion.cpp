#include <iostream>
using namespace std;

int main()
{
    int number = 25;
    int* ptr = &number;

    cout << "Original number: " << number << endl;

    // Error 1
    ptr = number;

    // Error 2
    *number = 50;

    cout << "Updated number: " << *ptr << endl;

    return 0;
}
