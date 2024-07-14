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
class Car : public Vehicle {
public:
    Car(const string& mk, const string& mdl, int yr)
        : Vehicle(mk, mdl, yr) {}
};
class Truck : public Vehicle {
public:
    Truck(const string& mk, const string& mdl, int yr)
        : Vehicle(mk, mdl, yr) {}
};
class Motorcycle : public Vehicle {
public:
    Motorcycle(const string& mk, const string& mdl, int yr)
        : Vehicle(mk, mdl, yr) {}
};

int main() {
    Car myCar("Toyota", "Crazy", 2020);
    Truck myTruck("Khan", "1998", 2019);
    Motorcycle myMotorcycle("Honda", "Sportster", 2021);

   cout << "Car Information:" << endl;
    myCar.displayInfo();
    cout << endl;

    cout << "Truck Information:" << std::endl;
    myTruck.displayInfo();
    cout << endl;

   cout << "Motorcycle Information:" << endl;
    myMotorcycle.displayInfo();
   cout << endl;

    return 0;
}

