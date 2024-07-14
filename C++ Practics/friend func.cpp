#include<iostream>
using namespace std;

class temp2;
class temp1{
	private:
		int data1;
		public: temp1(): data1(12){
		}
	friend int func(temp1, temp2);
};
class temp2{
	private:
		int data2;
		public: temp2(): data2(1){};
			friend int func(temp1, temp2);};
				int func(temp1 obj1, temp2 obj2)
			{return (obj1.data1 + obj2.data2);}


int main (){
	temp1 a;
	temp2 b;
	cout<<"Data :"<<func(a,b);
	
}
