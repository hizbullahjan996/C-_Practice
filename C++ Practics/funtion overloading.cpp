#include<iostream>
using namespace std;

class Math{
	public:
	int add(int a, int b){
		return a + b;
	}
	int add(int a, int b, int c){
		return a + b + c;
	}
	double add(double a, double b){
		return a + b;
	}
};

int main(){
	Math math;
	
	cout<< "Add Two integer : "<< math.add(3,4)<<endl;
	cout<< "Add Three integers : "<<math.add(3,4,5)<<endl;
	cout<< "Add Two Doubles : "<< math.add(3.4,6.7)<<endl;
	
	return 0;
}
