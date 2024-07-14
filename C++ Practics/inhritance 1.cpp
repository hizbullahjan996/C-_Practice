#include<iostream>
using namespace std;

class Mydata{
	public:
		void print(int i){
			cout<<"Printing i"<<i<<endl;	
		}
		void print(double f){
			cout<<"Printing Double "<<f<<endl;
		}
		void print (string k){
			cout<<"Printing String "<<k<<endl;
		}
};
class data:public Mydata{
};

int main(void){
	data d;
	d.print(4);
	d.print(343.5);
	d.print("Khan");
}
