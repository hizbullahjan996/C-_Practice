#include <iostream>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(const string& mk, const string& mdl, int yr)
         : make(mk), model(mdl), year(yr) {}

    void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model
             << ", Year: " << year << endl;
    }
};

int main() {
    Vehicle myCar("Toyota", "Crazy", 2020);
    Vehicle myTruck("Ford", "F-150", 2019);
    Vehicle myMotorcycle("Honda", "Sportster", 2021);

    cout << "Car Information:" << endl;
    myCar.displayInfo();
    cout << endl;

    cout << "Truck Information:" << endl;
    myTruck.displayInfo();
    cout << endl;

    cout << "Motorcycle Information:" << endl;
    myMotorcycle.displayInfo();
    cout << endl;

    return 0;
}

