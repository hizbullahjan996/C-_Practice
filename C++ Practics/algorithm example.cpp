#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Initial vector
    std::vector<int> vec = {50, 20, 30, 10, 40};
    
    // Searching for an element
    auto it = std::find(vec.begin(), vec.end(), 30);
    if (it != vec.end()) {
        std::cout << "Element 30 found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element 30 not found." << std::endl;
    }

    // Sorting the vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted elements: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Copying the sorted vector to another vector
    std::vector<int> vec_copy(vec.size());
    std::copy(vec.begin(), vec.end(), vec_copy.begin());
    std::cout << "Copied elements: ";
    for (int val : vec_copy) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Swapping two elements
    std::cout << "Before swap: vec[0] = " << vec[0] << ", vec[1] = " << vec[1] << std::endl;
    std::swap(vec[0], vec[1]);
    std::cout << "After swap: vec[0] = " << vec[0] << ", vec[1] = " << vec[1] << std::endl;

    return 0;
}

