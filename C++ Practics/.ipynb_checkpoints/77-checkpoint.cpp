#include<iostream>
using namespace std;

class a{
	public:
		void show(){
			cout<<"B";
		}
	};
class b:private a{
	void show(){
		cout<<"B";
	}
};
class c:public b{
	void show(){
		cout<<"B";
	}
};
class d:public a{
	void show(){
		cout<<"B";
	}
};

int main(){
	a obj1;
	obj1.show();
	cout<<endl;
	obj1.show();

};
