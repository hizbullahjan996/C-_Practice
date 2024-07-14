#include <iostream>

using namespace std;

class Abc {
    private:
        int x;
        int y;
        int z;

    public:
        void readInput() {
            cout << "Enter value for x: ";
            cin >> x;
            cout << "Enter value for y: ";
            cin >> y;
        }

        void calculate() {
            z = x + y;
        }

        void displayResult() const {
            cout << "The sum of x and y is: " << z << endl;
        }
};

int main() {
    Abc obj1;
    obj1.readInput();
    obj1.calculate();
    obj1.displayResult();

    return 0;
}

