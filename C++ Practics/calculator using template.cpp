#include<iostream>
using namespace std;

template <class T>

class calculator{
	private:
		T num1 , num2;
	public: 
	calculator(T n1, T n2){
		num1 = n1;
		num2 = n2;
	}
void displayResult(){
	cout<<"This is The number"<<num1<<"and"<<num2<<endl;
	cout<<" Addition is "<<add()<<endl;
	cout<<" subtractio is "<<subtract()<<endl;
	cout<<" Multiplictaion is "<<multiply()<<endl;
	cout<<" division is "<<divide()<<endl;
}
T add(){
	return num1 + num2;
}
T subtract(){
	return num1 - num2;
}
T multiply(){
	return num1 * num2;
}
T divide(){
	return num1 / num2;
}
};

int main(){
	calculator<int> intCalcu(2,4);
	intCalcu.displayResult();
}
