#include <iostream>
using namespace std;

template<typename T>
T show (T num1){
	cout<<num1<<endl;
}

int main (){
	show("Hammad");
	show(4);
	show(2.45);
	show("=");
}
