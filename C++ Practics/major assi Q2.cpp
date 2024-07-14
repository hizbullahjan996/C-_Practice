#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    Person(const string& name, int age, const string& address)
        : name(name), age(age), address(address) {}

    void setName(const string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setAddress(const string& address) { this->address = address; }

    string getName() const { return name; }
    int getAge() const { return age; }
    string getAddress() const { return address; }
};

class Customer : public Person {
private:
    string customerID;
    string phoneNumber;

public:
    Customer(const string& name, int age, const string& address,
             const string& customerID, const string& phoneNumber)
        : Person(name, age, address), customerID(customerID), phoneNumber(phoneNumber) {}

    void setCustomerID(const string& customerID) { this->customerID = customerID; }
    void setPhoneNumber(const string& phoneNumber) { this->phoneNumber = phoneNumber; }

    string getCustomerID() const { return customerID; }
    string getPhoneNumber() const { return phoneNumber; }
};

class Room {
private:
    int roomNumber;
    string roomType;
    double pricePerNight;
    bool isAvailable;

public:
    Room(int roomNumber, const string& roomType, double pricePerNight)
        : roomNumber(roomNumber), roomType(roomType), pricePerNight(pricePerNight), isAvailable(true) {}

    bool checkAvailability() const { return isAvailable; }
    void book() { isAvailable = false; }
    void free() { isAvailable = true; }

    int getRoomNumber() const { return roomNumber; }
    string getRoomType() const { return roomType; }
    double getPricePerNight() const { return pricePerNight; }
};

class Reservation {
private:
    static int nextReservationID;
    int reservationID;
    Customer customer;
    Room* room;
    string checkInDate;
    string checkOutDate;
    double totalPrice;

public:
    Reservation(const Customer& customer, Room* room,
                const string& checkInDate, const string& checkOutDate)
        : customer(customer), room(room), checkInDate(checkInDate), checkOutDate(checkOutDate) {
        reservationID = nextReservationID++;
        calculateTotalPrice();
    }

    void calculateTotalPrice() {
        // Dummy implementation, assuming 1 night per reservation for simplicity
        totalPrice = room->getPricePerNight();
    }

    int getReservationID() const { return reservationID; }
    Customer getCustomer() const { return customer; }
    Room* getRoom() const { return room; }
    string getCheckInDate() const { return checkInDate; }
    string getCheckOutDate() const { return checkOutDate; }
    double getTotalPrice() const { return totalPrice; }
};

int Reservation::nextReservationID = 1000;

class HotelReservationSystem {
private:
    vector<Room> rooms;
    vector<Reservation> reservations;

public:
    void addRoom(const Room& room) {
        rooms.push_back(room);
    }

    bool makeReservation(const Customer& customer, int roomNumber,
                         const string& checkInDate, const string& checkOutDate) {
        for (auto& room : rooms) {
            if (room.getRoomNumber() == roomNumber && room.checkAvailability()) {
                room.book();
                reservations.emplace_back(customer, &room, checkInDate, checkOutDate);
                return true;
            }
        }
        return false;
    }

    void displayAvailableRooms() const {
        cout << "Available Rooms:\n";
        for (const auto& room : rooms) {
            if (room.checkAvailability()) {
                cout << "Room " << room.getRoomNumber() << " (" << room.getRoomType()
                     << ") - $" << room.getPricePerNight() << " per night\n";
            }
        }
    }

    void displayReservations() const {
        cout << "Current Reservations:\n";
        for (const auto& reservation : reservations) {
            cout << "Reservation ID: " << reservation.getReservationID() << "\n"
                 << "Customer: " << reservation.getCustomer().getName() << "\n"
                 << "Room: " << reservation.getRoom()->getRoomNumber() << "\n"
                 << "Total Price: $" << reservation.getTotalPrice() << "\n\n";
        }
    }
};

int main() {
    HotelReservationSystem hrs;

    // Add some rooms
    hrs.addRoom(Room(101, "Single", 100.0));
    hrs.addRoom(Room(102, "Double", 150.0));
    hrs.addRoom(Room(103, "Suite", 250.0));

    // Create a customer
    Customer customer("John Doe", 30, "123 Main St", "C001", "555-1234");

    // Make a reservation
    string checkIn = "2024-06-21";
    string checkOut = "2024-06-22"; // 1 night

    if (hrs.makeReservation(customer, 102, checkIn, checkOut)) {
        cout << "Reservation made successfully!\n";
    } else {
        cout << "Failed to make reservation.\n";
    }

    // Display available rooms and reservations
    hrs.displayAvailableRooms();
    hrs.displayReservations();

    return 0;
}

