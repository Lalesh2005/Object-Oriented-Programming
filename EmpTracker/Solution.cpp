#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    static int employeeCount;   // static data member

public:
    // Parameterized Constructor
    Employee(string name, int id)
    {
        this->name = name;
        this->id = id;
        employeeCount++;
        cout << "Employee Created\n";
        displayEmployee();
        displayCount();
        cout << "---------------------------\n";
    }

    // Member function
    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }

    // Static member function
    static void displayCount()
    {
        cout << "Active Employees: " << employeeCount << endl;
    }

    // Destructor
    ~Employee()
    {
        employeeCount--;
        cout << "Employee " << id << " left the system\n";
        displayCount();
        cout << "---------------------------\n";
    }
};

// Static member definition
int Employee::employeeCount = 0;

int main()
{
    cout << "Entering main()\n\n";

    Employee e1("Lalesh", 12);
    Employee e2("Ram", 23);

    cout << "\nExiting main()\n";
    return 0;
}