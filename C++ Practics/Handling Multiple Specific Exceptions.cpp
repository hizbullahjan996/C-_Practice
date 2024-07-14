#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

void handle_exceptions() {
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

    } catch (const std::out_of_range& oor) {
        std::cerr << "Out of range exception occurred: " << oor.what() << std::endl;
    } catch (const std::runtime_error& re) {
        std::cerr << "Runtime error occurred: " << re.what() << std::endl;
    }
}
int main() {
    handle_exceptions();
    return 0;
}

