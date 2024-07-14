#include<iostream>
using namespace std;

template<typename T>
class Calculator {
   private:
   	T num;
   	public:
   		T get() {
   			return num;
		   }
		void set(T num1) {
		 num = num1;
        }
	};

int main() {
    Calculator<int> intCalc;
    intCalc.set(10);
    cout << "Integer value: " << intCalc.get() << endl;

    Calculator<double> doubleCalc;
    doubleCalc.set(5.5);
    cout << "Double value: " << doubleCalc.get() << endl;

    return 0;
}

