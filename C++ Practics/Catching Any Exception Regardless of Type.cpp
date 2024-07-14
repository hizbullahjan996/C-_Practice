#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

void catch_any_exception() {
    try {
        // This will raise an std::out_of_range exception if the index is invalid
        std::vector<int> numbers = {1, 2, 3};
        std::cout << "Enter an index: ";
        int index;
        std::cin >> index;
        std::cout << "The number at index " << index << " is " << numbers.at(index) << std::endl;

        // This will raise an std::runtime_error exception
        std::cout << "Enter a string: ";
        std::string input;
        std::cin >> input;
        if (input == "error") {
            throw std::runtime_error("This is a runtime error");
        }

    } catch (const std::exception& e) {
        std::cerr << "An exception occurred: " << e.what() << std::endl;
    }
}
int main() {
    catch_any_exception();
    return 0;
}

