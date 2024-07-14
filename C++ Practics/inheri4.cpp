#include<iostream>
using namespace std;

class Base {
	private:
		int pvt =1;
		protected:
			int prot = 2;
			
			public:
				int pub = 3;
				int getPVT(){
					return pvt;
				}
}; 
class privateDerived : protected Base{
	public:
		int getProt(){
			return prot;
		}
		int getPub(){
			return pub;
		}
};

int main (){
	privateDerived obj1;
	cout<<"Protected cannot be accessed ." <<endl;
	cout<< "Protected = "<<obj1.getProt()<<endl;
	cout<<"Public = "<< obj1.getPub()<<endl;
	return 0;
}
