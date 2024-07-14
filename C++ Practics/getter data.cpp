#include<iostream>
using namespace std;

template <class T>
class Calculator {
    private:
        T num1, num2;

    public:
        
        Calculator(T n1, T n2) {
            num1 = n1;
            num2 = n2;
        }

    
        void setNum1(T n1) {
            num1 = n1;
        }

        void setNum2(T n2) {
            num2 = n2;
        }

        
        T getNum1() {
            return num1;
        }

        T getNum2() {
            return num2;
        }

        
        void displayResult() {
            cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
            cout << num1 << " + " << num2 << " = " << add() << endl;
            cout << num1 << " - " << num2 << " = " << subtract() << endl;
            cout << num1 << " * " << num2 << " = " << multiply() << endl;
            cout << num1 << " / " << num2 << " = " << divide() << endl;
        }

       
        T add() { 
            return num1 + num2;
        }

        T subtract() {
            return num1 - num2;
        }

        T multiply() {
            return num1 * num2;
        }

        T divide() {
            return num1 / num2;
        }
};

int main() {
    Calculator<int> intCalc(5, 1);
    Calculator<float> floatCalc(2.4, 1.3);

    cout << "Int Result: " << endl;
    intCalc.displayResult();

    cout << endl << "Float Result: " << endl;
    floatCalc.displayResult();

    intCalc.setNum1(8);
    intCalc.setNum2(2);
    cout << endl << "Updated Int Result: " << endl;
    intCalc.displayResult();

    return 0;
}

