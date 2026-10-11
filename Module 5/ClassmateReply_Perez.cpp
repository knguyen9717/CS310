#include <iostream>
using namespace std;

int addNumbers(int a, int b)
{
    return a + b;
}

void displayResult(int result)
{
    cout << "The result is: " << result << endl;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers to add up: ";
    cin >> num1 >> num2;

    int result = addNumbers(num1, num2);

    displayResult(result);

    return 0;
}
