#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() {} 

    int add(int num1, int num2) {
        return num1 + num2;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    float divide(float num1, float num2) {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    Calculator calc;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << calc.add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << calc.subtract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << calc.multiply(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << calc.divide(num1, num2) << endl;
    cout << "6 / 0 = " << calc.divide(6, 0) << endl;

    return 0;
}

