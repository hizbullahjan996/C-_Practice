#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define a structure to hold employee information
struct Employee {
    int id;
    string name;
    float salary;
};

// Function to display employee information
void displayEmployee(const Employee &e) {
    cout << "ID: " << e.id << ", Name: " << e.name << ", Salary: $" << e.salary << '\n';
}

int main() {
    // Create a vector to store employee records
    vector<Employee> employees;

    // Add employee records to the vector
    employees.push_back({1001, "John Doe", 60000.0});
    employees.push_back({1002, "Jane Smith", 75000.0});
    employees.push_back({1003, "Alice Johnson", 80000.0});

    // Sort the employees by their salary in descending order
    sort(employees.begin(), employees.end(), [](const Employee &a, const Employee &b) {
        return a.salary > b.salary;
    });

    // Display sorted employee records
    cout << "Sorted employee records by salary (descending):\n";
    for (const auto &employee : employees) {
        displayEmployee(employee);
    }

    // Search for an employee by ID
    int searchId = 1002;
    auto it = find_if(employees.begin(), employees.end(), [searchId](const Employee &e) {
        return e.id == searchId;
    });

    // Display the search result
    if (it != employees.end()) {
        cout << "\nEmployee found: ";
        displayEmployee(*it);
    } else {
        cout << "\nEmployee with ID " << searchId << " not found.\n";
    }

    return 0;
}

