#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
private:
    string name;

public:
    void setName(string employeeName)
    {
        name = employeeName;
    }

    void displayName()
    {
        cout << "Employee: " << name << endl;
    }
};

// First derived class
class Manager : public Employee
{
public:
    void manageTeam()
    {
        cout << "Manager is managing the team." << endl;
    }
};

// Second derived class
class Technician : public Employee
{
public:
    void repairMachine()
    {
        cout << "Technician is repairing a machine." << endl;
    }
};

int main()
{
    Manager manager1;
    Technician technician1;

    manager1.setName("John");
    technician1.setName("Mike");

    manager1.name = "David";

    technician1.manageTeam();

    return 0;
}
