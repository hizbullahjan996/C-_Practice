#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
    double salary;
    double bonusPercentage;

public:
    Employee(string name, int employeeID, double salary, double bonusPercentage)
        : name(name), employeeID(employeeID), salary(salary), bonusPercentage(bonusPercentage) {}

    double calculateBonus() const {
        return salary * bonusPercentage;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee manager("Hizb Ullah Jan", 10000, 60000, 0.1);
    Employee engineer("Fareed Ullah", 1000, 50000, 0.05);
    Employee salesperson("Abdullah", 1900, 45000, 0.05);

    cout << "Manager Information:" << endl;
    manager.display();
    cout << "Bonus: " << manager.calculateBonus() << endl;

    cout << "\nEngineer Information:" << endl;
    engineer.display();
    cout << "Bonus: " << engineer.calculateBonus() << endl;

    cout << "\nSalesperson Information:" << endl;
    salesperson.display();
    cout << "Bonus: " << salesperson.calculateBonus() << endl;

    return 0;
}

