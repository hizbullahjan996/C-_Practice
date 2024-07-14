#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    auto it = find(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        cout<< "Element found at index: " << distance(vec.begin(), it)<<endl;
    } else {
    	cout << "Element not found." <<endl;
    }

    return 0;
}

