#include <iostream>

template <typename T>
class Box {
private:
    T value;

public:
    // Constructor
    Box(T value) : value(value) {}

    // Getter
    T getValue() const {
        return value;
    }

    // Setter
    void setValue(T value) {
        this->value = value;
    }
};

int main() {
    // Create a Box object for integers
    Box<int> intBox(10);
    std::cout << "Initial integer value: " << intBox.getValue() << std::endl;
    intBox.setValue(20);
    std::cout << "Updated integer value: " << intBox.getValue() << std::endl;

    // Create a Box object for doubles
    Box<double> doubleBox(5.5);
    std::cout << "Initial double value: " << doubleBox.getValue() << std::endl;
    doubleBox.setValue(10.5);
    std::cout << "Updated double value: " << doubleBox.getValue() << std::endl;

    // Create a Box object for strings
    Box<std::string> stringBox("Hello");
    std::cout << "Initial string value: " << stringBox.getValue() << std::endl;
    stringBox.setValue("World");
    std::cout << "Updated string value: " << stringBox.getValue() << std::endl;

    return 0;
}

